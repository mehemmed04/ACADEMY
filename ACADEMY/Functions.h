#pragma once
#include<iostream>;
#include "Entities.h";
using namespace std;

void ShowMenu() {
	cout << "ShowAllTeachers   1" << endl;
	cout << "Create Group      2" << endl;
	cout << "Show Groups       3" << endl;
	cout << "Add Teacher       4" << endl;
}

void ShowTeacher(Teacher*teacher) {
	cout << "Teacher's name : " << teacher->fullname << endl;
	cout << "Teacher's occupation : " << teacher->occupation << endl;
	cout << "======================================" << endl;
}

void ShowAllTeachers(Academy* academy,Teacher** teachers) {
	int l = academy->teacher_count;
	for (size_t i = 0; i<l ; i++)
	{
		ShowTeacher(teachers[i]);
	}
}

void ShowGroup(Group* group) {
	cout << "Group Title : " << group->title << endl;
	cout << "Group's Teacher : " << group->teacher << endl;
	cout << "Group Occupation" << group->occupation << endl;
	cout << "Group's students : " << group->students << endl;
	cout << "Group student count" << group->student_count << endl;
	cout << "======================================" << endl;
}

void ShowAllGroups(Academy* academy, Group**groups) {
	int l = academy->group_count;
	for (size_t i = 0; i < l; i++)
	{
		ShowGroup(groups[i]);
	}
}