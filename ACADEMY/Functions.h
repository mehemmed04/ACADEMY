#pragma once
#include<iostream>;
#include "Entities.h";
using namespace std;

void ShowMenu() {
	cout << "ShowAllTeachers     1" << endl;
	cout << "Create Group        2" << endl;
	cout << "Show Groups         3" << endl;
	cout << "Add Teacher         4" << endl;
}

void ShowTeacher(Teacher*teacher) {
	cout << "Teacher's name : " << teacher->fullname << endl;
	cout << "Teacher's occupation : " << teacher->occupation << endl;
	cout << "======================================" << endl;
}

void ShowStudent(Student* student) {
	cout << "student's name : " << student->fullname << endl;
	cout << "student's age : " << student->age << endl;
	cout << "======================================" << endl;
}

void ShowAllStudents(Group* group) {
	int l = group->student_count;
	for (size_t i = 0; i < l; i++)
	{
		ShowStudent(group->students[i]);
	}
}

void ShowAllTeachers(Academy* academy) {
	int l = academy->teacher_count;
	for (size_t i = 0; i<l ; i++)
	{
		ShowTeacher(academy->teachers[i]);
	}
}

void ShowGroup(Group* group) {
	cout << "Group Title : " << group->title << endl;
	cout << "Group's Teacher : "<< endl; 
	ShowTeacher(group->teacher);
	cout << "Group Occupation : " << group->occupation << endl;
	cout << "Group's students : "<< endl;
	ShowAllStudents(group);
	cout << "Group student count : " << group->student_count << endl;
	cout << "======================================" << endl;
}

void ShowAllGroups(Academy* academy) {
	int l = academy->group_count;
	for (size_t i = 0; i < l; i++)
	{
		ShowGroup(academy->groups[i]);
	cout << "\n\n";
	}
}