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
	Teacher* teacher;
	int student_count;
	Student** students;
};



struct Academy
{
	int student_count;
	char* directorname;
	Group** groups;
	int group_count;
	Teacher** teachers;
	int teacher_count;
};