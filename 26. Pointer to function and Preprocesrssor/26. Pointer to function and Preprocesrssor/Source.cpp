#include <iostream>
#include <string>

using namespace std;

string Address(string value) {
	return value;
}

string Person(string value) {

	return value;
}

void ShowPerson(string(*func)(string v)) {
	cout << func("Test") << endl;
}


int main() {

	ShowPerson(Address);
	ShowPerson(Person);

	system("pause");
    return 0;
}