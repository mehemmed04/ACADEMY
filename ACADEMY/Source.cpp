#include<iostream>;
#include "Entities.h";
#include"Functions.h";
#include "AddFunctions.h";
#include"CreateFunctions.h";
using namespace std;

int student_coumt = 3;
int group_count = 2;
int teacher_count = 2;
void main() {
	Student** students = new Student * [student_coumt] {
		new Student{ new char[] {"Nurlan Shirinov"},21},
		new Student{ new char[] {"Mehemmed Bayramov"},17},
		new Student{ new char[] {"Ali Ahmedov"},20}
	};
	Teacher* teacher1 = new Teacher{ new char[] {"Elvin Camalzade"},new char[] {"Programmer"} };
	Teacher* teacher2 = new Teacher{ new char[] {"Samir Azimov"},new char[] {"IT"} };

	Teacher** teachers = new Teacher * [teacher_count] {teacher1, teacher2};

	Group** groups = new Group * [group_count] {
		new Group{ new char[] {"FBS3212"},new char[] {"Programmers"},teacher1,student_coumt,students},
		new Group{ new char[] {"FBS3212"},new char[] {"IT"},teacher2,student_coumt,students}
	};
	

	Academy* academy = new Academy{ student_coumt ,new char[] {"Adalat Allahverdiyev"},groups,group_count ,teachers,teacher_count};

	while (true)
	{
		ShowMenu();
		int select = 0;
		cout << "Enter select : ";
		cin >> select;
		system("cls");
		if (select == 1)
		{
			ShowAllTeachers(academy);
		}
		else if(select == 2)
		{
			CreateGroup(academy,students);
		}
		else if (select == 3)
		{
			ShowAllGroups(academy);
		}
		else if (select == 4)
		{
			AddTeacher(academy);
		}
		else
		{
			continue;
		}
	}


}