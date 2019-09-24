#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "ru");

	/*char str[6] = { 'H', 'e', 'l', 'l', 'o' };

	cout << sizeof(str) << endl;
	cout << str << endl;*/

	//--------------------------------

	double a = 10.3;
	double b = 1.3;
	int res = 20;

	//res = a + b;
	//cout << "Res = " << res << " sizeOF " << sizeof(res) << endl;

	//cout << a << " sizeOF " << sizeof(a) << " After => " << int(a) << " = " << a << " sizeOF " << sizeof(a) << endl; // явне 
	//cout << a << " sizeOF " << sizeof(a) << " After => " << bool(a) << " = " << a << " sizeOF " << sizeof(a) << endl;
	//cout << res << " sizeOF " << sizeof(res) << " After => " << double(res) << " = " << res << " sizeOF " << sizeof(res) << endl;

	char cHAR = 'w';

	cout << "cHAR = " << cHAR << " sizeOF " << sizeof(cHAR) << " After " << int(cHAR) <<endl;

	int test = 119;

	cout << "test = " << test << " sizeOF " << sizeof(test) << " After " << char(test) << endl;

	for (int i = 0; i < 255; i++) {
		cout << "key " << i << " value " << char(i) << endl;
		/*Sleep(500);
		cout << char(7) << endl;*/
	}

	system("pause");
	return 0;
}
