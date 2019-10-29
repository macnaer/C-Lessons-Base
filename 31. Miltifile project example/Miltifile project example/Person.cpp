#include "Person.h"
#include <iostream>


using namespace std;
void Person::ShowPerson()
{
	cout << "Name: " << name << " Surname: " << surname << " Age: " << age << endl;
}

void Person::AddNewPerson() {
	cout << "Enter person name: " << endl;
	cin >> name;
	cout << "Name: " << name << endl;
	cout << "Enter person surname: " << endl;
	cin >> surname;
	cout << "Surname: " << surname << endl;
	cout << "Enter age: " << endl;
	cin >> age;
	cout << "Age: " << age << endl;
}
