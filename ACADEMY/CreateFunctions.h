#pragma once
#include<iostream>;
#include "Entities.h";
using namespace std;

Teacher* SelectTeacherForGroup(Academy*academy,Teacher**teacher) {
	int id = 0;
	cout << "Enter Techer's id to select for group : ";
	cin >> id;
	
	for (size_t i = 0; i <academy->teacher_count; i++)
	{
		if (id == i + 1)
		{
			return teacher[i];
		}
	}
}

Student* SelectStudentForGroup(Academy* academy, Student** students) {
	int id = 0;
	cout << "Enter Student's id to select for group : ";
	cin >> id;

	for (size_t i = 0; i < academy->student_count; i++)
	{
		if (id == i + 1)
		{
			return students[i];
		}
	}

}

Group* GetNewGroup(Academy* academy,Student** students) {
	cin.ignore();
	cin.clear();
	char* groupTitle = new char[100] {};
	cout << "Enter Group Title :";
	cin.getline(groupTitle, 100);

	char* occupation = new char[100]{};
	cout << "Enter Group occupation : ";
	cin.getline(occupation,100);

	auto newTeacher = SelectTeacherForGroup(academy, academy->teachers);

	int student_count = 0;
	cout << "Enter student count : ";
	cin >> student_count;

	Student** newstudents = new Student * [student_count] {};
	for (size_t i = 0; i < student_count; i++)
	{
		auto student = SelectStudentForGroup(academy,students);
		newstudents[i] = student;
	}
	auto newGroup = new Group{ groupTitle ,occupation,newTeacher,student_count,newstudents};
	return newGroup;
}

void CreateGroup(Academy* academy,Student ** students) {
	int l = academy->group_count;
	auto newgroups = new Group * [l + 1]{};
	for (size_t i = 0; i < l; i++)
	{
		newgroups[i] = academy->groups[i];
	}
	newgroups[l] = GetNewGroup(academy,students);
	academy->groups = newgroups;
	newgroups = nullptr;
	academy->group_count++;
}
