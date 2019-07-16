#include <iostream>

using namespace std;

int main() {

	/*int a = 0, b = 0;
	cout << "Enter two digits: " << endl;
	cin >> a >> b;

	if (a > b) { 
	cout << "a = " << a << " > " << " b = " << b << endl;
	}
	else if (a < b) {
		cout << "a = " << a << " < " << " b = " << b << endl;
	}
	
	else {
		cout << "a = " << a << " = " << "b = " << b << endl;
	}*/


	int a = 0, b = 0, c = 0;
	cout << "Enter three digits: " << endl;
	cin >> a >> b >> c;

	if (a > b && a > c) {
		cout <<   a << " > "  << b << " \n"  << a << " > " << c << endl;
	}

	/*
	 || - or
	 && - and
	 < 
	 >
	 <=
	 >=
	 ==
	 !=

	*/


	system("pause");
	return 0;
}