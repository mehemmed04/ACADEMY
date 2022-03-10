#pragma once
#pragma once
#include<iostream>
#include"Entities.h"
using namespace std;

Teacher* GetNewTeacher() {
	cout << "Enter Teacher fullname : ";
	cin.ignore();
	cin.clear();
	char* fullname = new char[100]{};
	cin.getline(fullname, 100);

	cout << "Enter Teacher occupation : "; 
	char* occupation = new char[100]{};
	cin.getline(occupation, 100);

	auto teacher = new Teacher{ fullname,occupation };
	return teacher; 
}

void AddTeacher(Academy* academy, Teacher** teachers) {
	auto teacher = GetNewTeacher(); 
	int count = academy->teacher_count;
	auto newteachers = new Teacher * [count + 1];

	for (size_t i = 0; i < count; i++)
	{
		newteachers[i] = teachers[i];
	}
	newteachers[count] = teacher; 
	teachers = newteachers;
	newteachers = nullptr;  
	academy->teacher_count++;
}

