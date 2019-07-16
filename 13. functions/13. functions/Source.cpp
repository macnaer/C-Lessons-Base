#include <iostream>

using namespace std;


void ShowInfo() {

	cout << "Show info function! " << endl;
} 

//void Sum(int a, int b) {
//
//	cout << "sum a address a =  " << &a << " sum a value = " << a << endl;
//	cout << "sum b address b =  " << &b << " sum b value = " << b << endl;
//	cout << "Sum = " << a + b << endl;
//}

int Sum(int a, int b) {
	ShowInfo();
	cout << "==============================" << endl;
	cout << "sum a address a =  " << &a << " sum a value = " << a << endl;
	cout << "sum b address b =  " << &b << " sum b value = " << b << endl;
	cout << "==============================" << endl;
	int res = a + b;
	return res;
	cout << "o_o ==> o_0" << endl;
}

int main() {

	ShowInfo();

	int a = 0;
	int b = 0;

	cout << "Enter two digits: " << endl;
	cin >> a >> b;

	cout << "main a address a =  " << &a  << " main a value = " << a << endl;
	cout << "main b address b =  " << &b << " main b value = " << b << endl;

	int result = Sum(a, b);

	cout << "Sum result = " << result <<endl;
	int c = 0;
	cout << "Enter c ==> " << endl;
	cin >> c;
	int result2 = Sum(result, c);

	cout << "Sum result2 = " << result2 <<endl;

	


	
	
	system("pause");
	return 0;
}