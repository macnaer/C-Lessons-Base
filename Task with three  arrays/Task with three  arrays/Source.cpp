#include <iostream>
#include <ctime>

using namespace std;

void FillArr(int arr[], const int SIZE) {

	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 10 + 1;
	}
}


void PrintArr(int arr[], const int SIZE) {
	cout << "===============Start arr ==============" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
	cout << "===============End arr ================" << endl;
}


void FindMaches(int arrA[], int arrB[], const int SIZE, int *pCounter) {

	cout << "------------------Find Matches Start--------------------" << endl;

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (arrA[i] == arrB[j]) {
				cout << "Match ==> " << arrA[i] << " AND " << arrB[j] << endl;
				(*pCounter)++;
			}
		}
	}
	cout << "------------------Find Matches End----------------------" << endl;

}




int main() {

	srand(unsigned(time(NULL)));

	const int SIZE = 5;
	int arrA[SIZE];
	int arrB[SIZE];

	int counter = 0;
	int *pCounter = &counter;

	FillArr(arrA, SIZE);
	FillArr(arrB, SIZE);

	PrintArr(arrA, SIZE);
	PrintArr(arrB, SIZE);

	FindMaches(arrA, arrB, SIZE, pCounter);

	cout << "pCounter = " << *pCounter << endl;

	int newSize = (*pCounter) + (SIZE * 2);
	newSize += SIZE * 2 - (*pCounter);
	
	cout << "newSie = " << newSize << endl;

	int newArr[] = { newSize };

	PrintArr(newArr, newSize);


	// Continue .....




	system("pause");
	return 0;
}