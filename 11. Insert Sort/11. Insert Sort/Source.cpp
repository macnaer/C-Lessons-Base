#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(unsigned(time(NULL)));

	/*const int SIZE = 5;
	int a[SIZE];

	cout << "---------------------Before------------------>" << endl;

	for (int i = 0; i < SIZE; i++) {
		a[i] = rand() % 10 + 1;
	}

	for (int i = 0; i < SIZE; i++) {
		cout << "a[" << i << "] = " << a[i]  << endl;
	}

	cout << "---------------------Before------------------>" << endl;

	int tmp = 0; 
	int i, j; 

	for (i = 1; i < SIZE; i++)
	{
		tmp = a[i]; 

		for (j = i - 1; j >= 0 && a[j] > tmp; j--) {
			a[j + 1] = a[j];
		}
		a[j + 1] = tmp; 
	}
	

	cout << "----------------------After-------------------->" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << a[i] << endl;
	}
	cout << "----------------------After-------------------->" << endl;*/

	/*
	Дано масив А. Утворити реверс масиву А у масиві В(тобто перший елемент масиву А записати на місце останнього 
	елемента масиву В, другий елемент масиву А записати на місце передостаннього елемента масиву В і т. д.).
	
	*/


	const int SIZE = 5;

	int arrA[SIZE];
	int arrB[SIZE];

	for (int i = 0; i < SIZE; i++) {
		arrA[i] = rand() % 10 + 1;
	}

	cout << "###$$$%%%^^^Array A **&&^^%%" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "arrA[" << i << "] = " << arrA[i] << endl;
	}
	cout << "###$$$%%%^^^Array A **&&^^%%" << endl;

	int iterator = SIZE - 1;

	for (int i = 0; i < SIZE; i++) {
		arrB[i] = arrA[iterator];
		iterator--;
	}


	cout << "###$$$%%%^^^Array B **&&^^%%" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "arrB[" << i << "] = " << arrB[i] << endl;
	}
	cout << "###$$$%%%^^^Array B **&&^^%%" << endl;



	system("pause");
}