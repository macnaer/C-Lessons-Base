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

void NewMatchArr(int arrA[], int arrB[], int NewMatchArr[], int SIZE) {

	int iterator = 0;
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (arrA[i] == arrB[j]) {
				NewMatchArr[iterator] = arrA[i];
				iterator++;
			}
		}
	}
}

void NewNotMatchArr(int arrA[], int arrB[], int NewNotMatchArr[], int newArrMatch[], int SIZE) {

	int iterator = 0;
	int iteratorB = 0;
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (arrA[i] != newArrMatch[j]) {
				NewNotMatchArr[iterator] = arrA[i];
				iterator++;
			}
			break;
		}
	}
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (arrB[i] != newArrMatch[j]) {
				NewNotMatchArr[iterator] = arrB[i];
				iterator++;
			}
			break;
		}
	}
}

void JoinArr(int arrA[], int arrB[], int newArr[], int newArrMatch[], int newArrNotMatch[],  const int SIZE, const int newSize, int *pCounter) {

	int iterator = 0;
	int iteratorFornewArrMatch = 0;
	int iteratorFornewNotArrMatch = 0;
	int flag = true;
	for (int i = 0; i < newSize; i++) {
		if (i < 5) {
			newArr[i] = arrA[i];
		}
		else if (i >= 5 && i < 10) {
			newArr[i] = arrB[iterator];
			iterator++;
		}
		else if(i > 9 && i < 10 + (*pCounter)) {
			newArr[i] = newArrMatch[iteratorFornewArrMatch];
			iteratorFornewArrMatch++;
		}
		else {
			newArr[i] = newArrNotMatch[iteratorFornewNotArrMatch];
			iteratorFornewNotArrMatch++;
		}
	}

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

	int newArrMatchSize = *pCounter;
	cout << "newArrMatchSize = " << newArrMatchSize << endl;
		 
	int * newArrMatch = new int[newArrMatchSize];
	NewMatchArr(arrA, arrB, newArrMatch, SIZE);
	//cout << "Print arr for NewMatchArr=========================> " << endl;
	//PrintArr(newArrMatch, newArrMatchSize);
	//cout << "pCounter = " << *pCounter << endl;

	//cout << "Print arr for NewMatchArr=========================> " << endl;
	int newArrNotMatchSize = (SIZE*2) - (*pCounter);
	cout << "newArrNotMatchSize = " << newArrNotMatchSize << endl;
	int * newArrNotMatch = new int[newArrNotMatchSize];
	NewNotMatchArr(arrA, arrB, newArrNotMatch, newArrMatch, SIZE);
	PrintArr(newArrNotMatch, newArrNotMatchSize);


	int newSize = (*pCounter) + (SIZE * 2);
	newSize += SIZE * 2 - (*pCounter);
	
	//cout << "newSize = " << newSize << endl;
	 
	//int newArr[] = { newSize };   //wrong
	int *newArr = new int[newSize];

	JoinArr(arrA, arrB, newArr, newArrMatch, newArrNotMatch, SIZE, newSize, pCounter);
	PrintArr(newArr, newSize);



	system("pause");
	return 0;
}