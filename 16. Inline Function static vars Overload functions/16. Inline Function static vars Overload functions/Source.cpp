#include <iostream>


using namespace std;

//int a = 333;

//inline int Sum(int a, int b) {
//
//	return a + b;
//
//}

int Sum(int a, int b);
int Sum(int a, int b, int c);
double Sum(double a, double b);
double Sum(int a, double b);
double Sum(double a, double b, double c);
double Sum(double a, int b);
int Menu();




int main() {

	/*double result = 0;
	double a = 0, b = 0;
	cout << "Enter two digits ->" << endl;
	cin >> a >> b;

	result = Sum(a, b);*/
	/*cout << "Sum result = " << result << endl;*/


	//cout << 2 + 5 << endl;
	//cout << Sum(3, 5) << endl;

	/*cout << "a outside main = " << a << " a address outside main = " << &a  << endl;

	a = 10;

	cout << "Main a = " << a << " a address inside main = " << &a << endl;

	for (a = 0; a < 13; a++) {
		cout << "for a = " << a << " a address inside  for = " << &a << endl;
	}
	{
		a = 100500;
		cout << "a inside { } =  " << a << " a address inside  { } = " << &a << endl;
	}
	cout << "a = " << a << endl;*/

	int userChoice = Menu();
	cout << "userChoice = " << userChoice << endl;

	if (userChoice == 1) {
		int a = 0, b = 0;
		cout << "Enter two numbers " << endl;
		cin >> a >> b;
		cout << Sum(a, b) << endl;;
	}
	else if (userChoice == 2) {
		double a = 0, b = 0;
		cout << "Enter two numbers " << endl;
		cin >> a >> b;
		cout << Sum(a, b) << endl;;
	}
	cout << endl;
	system("pause");
	return 0;
}


int Menu() {
	int choice = 0;
	cout << "1. int + int\n2. double + double " << endl;
	cin >> choice;
	return choice;
}

int Sum(int a, int b) {
	cout << "int Sum(int a, int b)" << endl;
	return a + b;
}

double Sum(int a, double b) {
	cout << "double Sum(int a, double b)" << endl;
	return a + b;
}

double Sum(double a, int b) {
	cout << "double Sum(double a, int b)" << endl;
	return a + b;
}

int Sum(int a, int b, int c) {
	return a + b + c;
}

double Sum(double a, double b) {
	cout << "double Sum(double a, double b)" << endl;
	return a + b;
}

double Sum(double a, double b, double c) {
	return a + b + c;
}