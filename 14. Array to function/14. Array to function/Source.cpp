#include <iostream>
#include <ctime>

using namespace std;

void Print(int a) {
	cout << "A address = " << &a << " A value = " << a << endl;
}

void Fill(int arr[],/* <-- Адреса першого елементу */ const int SIZE) {
	cout << "Fill arr address = " << arr << endl;
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 20 + 1;
	}
}

void Print(int arr[],/* <-- Адреса першого елементу */ const int SIZE) {
	cout << "Print arr address = " << arr << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "arr [" << i << "] = " << arr[i] << " arr[" << i << "] address = " << &arr[i] <<endl;
	}
}


int main() {
	srand(unsigned(time(NULL)));

	const int SIZE = 5;
	int arr[SIZE];
	cout << "main arr address = " << arr << endl;
	Fill(arr, SIZE);
	Print(arr, SIZE);

	/*int a = 0;
	cout << "Enter a " << endl;
	cin >> a;
	cout << "main A address = " << &a << " main A value = " << a << endl;
	Print(a);*/

	system("pause");
	return 0;
}
