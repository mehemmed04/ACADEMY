#pragma once

struct Student
{
	char* fullname;
	int age;
};

struct Teacher
{
	char* fullname;
	char* occupation;
};

struct Group {
	char* title;
	char* occupation;
	Teacher** teachers;
	int student_count;
	Student** students;
};



struct Academy
{
	char* directorname;
	Group** groups;
	Teacher** teachers;
};