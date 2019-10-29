#pragma once
#include <string>

using namespace std;

struct Person {
	string name;
	string surname;
	int age;
	void ShowPerson();
	void AddNewPerson();
};