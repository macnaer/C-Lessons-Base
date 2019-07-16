#include <iostream>
#include <ctime>

using namespace std;

int main() {
	srand(unsigned(time(NULL)));


	/*const int SIZE = 10;
	int arr[SIZE];

	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 10 + 1;
	}
	cout << "Before --------------------------->>>" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << endl;
	}
	cout << "Before --------------------------->>>" << endl;

	for (int i = SIZE - 1; i >= 1; i--) {
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	cout << "After ---------------------------->>>" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << endl;
	}
	cout << "After ---------------------------->>>" << endl;*/


	// Дано масив А. Скопіювати елементи масиву А у масив В. "

	/*cout << "Task 1 ==============================>" << endl;
	const int SIZE = 5;
	int a[SIZE];
	int b[SIZE];

	for (int i = 0; i < SIZE; i++) {
		a[i] = rand() % 10 + 1;
	}

	for (int i = 0; i < SIZE; i++) {
		cout << "a [" << i << "] = " << a[i] <<endl;
	}

	for (int i = 0; i < SIZE; i++) {
		b[i] = a[i];
	}
	cout << "----------------------------" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "b [" << i << "] = " << b[i] << endl;
	}
	cout << "Task 1 ==============================>" << endl;*/

	//Дано 2 одновимірних масиви(А і В) по К елементів кожен. Утворити третій масив(С) із К * 2 елементів,
	//переписуючи у нього спочатку всі елементи масиву А по поряд

	cout << "Task 2 ==============================>" << endl;
	const int SIZE = 5;
	int a[SIZE], b[SIZE];
	int c[SIZE * 2];

	for (int i = 0; i < SIZE; i++) {
		a[i] = rand() % 10 + 1;
		b[i] = rand() % 10 + 1;
	}
	cout << "-----------------Array a----------------------" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "a[" << i << "] = " << a[i] << endl;

	}
	cout << "-----------------Array b----------------------" << endl;
	cout << "++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "b[" << i << "] = " << b[i] << endl;

	}

	int iterator = 0;
	for (int i = 0; i < SIZE * 2; i++) {
		if (i < SIZE) {
			c[i] = a[i];
		}
		else {
			c[i] = b[iterator];
			iterator++;
		}
		
	}

	cout << "-----------------Array c----------------------" << endl;
	for (int i = 0; i < SIZE * 2; i++) {
		cout << "c[" << i << "] = " << c[i] << endl;
	}

	cout << "++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << "++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << "Task 2 ==============================>" << endl;

	system("pause");
	return 0;
}
