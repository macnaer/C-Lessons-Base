#include <iostream>

using namespace std;

void Example1();
void Example2();

void Pointer(int *a, int *b) {
	cout << "Pointer a = " << *a << " Pointer a address = " << a << endl;
	(*a)++;

	cout << "Pointer b = " << *b << " Pointer b address = " <<b  << endl;
	(*b)--;
}


int main() {

	//Example1();
	//Example2();

	int a = 10;
	int *pA = &a;

	int b = 20;
	int *pB = &b;


	cout << "a = " << a << " a address = " << &a << endl;
	cout << "b = " << b << " b address = " << &b << endl;

	Pointer(pA, pB);
	cout << "============================================" << endl;
	cout << "a = " << a << " a address = " << &a << endl;

	
	cout << "============================================" << endl;
	cout << "b = " << b << " b address = " << &b << endl;


	system("pause");
	return 0;
}

void Example1() {
	int a = 5;
	cout << "a = " << a << " a address = " << &a << endl;

	int *pA = &a;

	cout << "*pA = " << *pA << " pA address = " << pA << endl;

	*pA = 300;
	a = 500;
	cout << "a = " << a << " a address = " << &a << endl;
	cout << "*pA = " << *pA << " pA address = " << pA << endl;
}

void Example2() {
	const int SIZE = 5;
	int arr[SIZE] = { 1,6,9,34,4 };

	int *newArr = arr;

	for (int i = 0; i < SIZE; i++) {
		cout << "arr [" << i << "] = " << arr[i] << " address = " << &arr[i] << endl;

	}

	newArr[0] = 100;
	cout << "=========================================>>>>" << endl;


	for (int i = 0; i < SIZE; i++) {
		cout << "arr [" << i << "] = " << arr[i] << " address = " << &arr[i] << endl;

	}
}