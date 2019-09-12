#include <iostream>
#include <ctime>

using namespace std;

void FillArr(int arr[], const int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 10 + 1;
	}
}

void PrintArr(int arr[], const int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
}


int main() {
	srand(unsigned(time(NULL)));

	int size = 0;
	cout << "Enter array size => " << endl;
	cin >> size;

	int *arr = new int[size];

	FillArr(arr, size);
	PrintArr(arr, size);


	delete[] arr;
	arr = nullptr;


	system("pause");
	return 0;
}