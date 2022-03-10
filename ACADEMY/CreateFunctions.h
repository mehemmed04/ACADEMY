#pragma once
#include<iostream>;
#include "Entities.h";
using namespace std;



Group GetNewGroup() {
	char* groupTitle = new char[100] {};
	cout << "Enter Group Title :";
	cin.getline(groupTitle, 100);

	char* occupation = new char[100]{};
	cout << "Enter Group occupation : ";
	cin.getline(occupation,100);



}

void CreateGroup() {


}
