# include <iostream>

using namespace std;

int main() {

	double a = 7.777;
	cout << "int = " << (int)a << endl;
	cout << "bool = " << (bool)a << endl;
	cout << "char = " << (char)a << endl; // Beep

	//-------------------------

	int b = 100.500;
	cout << "b = " << b << endl;

	b = a;
	cout << "After b = a : " << b << endl;

	cout << a / b << endl;

	system("pause");
	return 0;
}