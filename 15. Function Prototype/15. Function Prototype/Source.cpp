#include <iostream>
#include <ctime>

using namespace std;

void FillArr(int arr[], const int SIZE);
void PrintArr(int arr[], const int SIZE);
void SayHello(char name[]);
void Start();
void Sort(bool type);

int main() {
	srand(unsigned(time(NULL)));
	Start();

	const int SIZE = 10;
	int arr[SIZE];

	FillArr(arr, SIZE);
	PrintArr(arr, SIZE);
	bool type = 1;
	Sort(1);

	//===================================
	int arr2[] = {4,5,-1,6,-5,-9,80};
	bool flag = true;
	short first = 0;



	for (int i = 0; i < 7; i++) {
		cout << "arr2[" << i << "] = " << arr[i] << endl;
		if (!flag) {
			if (arr2[i] < 0) {
				first = i;
				cout << "First = " << first << endl;
			}
		}
	}


	//===================================

	system("pause");
	return 0;
}


void Start() {
	char name[] = "Bill";

	SayHello(name);
}

void SayHello(char name[]) {

	cout << "Hello, " << name << endl;
}

void FillArr(int arr[], const int SIZE) {
	
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 20 + 1;
	}

}

void PrintArr(int arr[], const int SIZE) {

	for (int i = 0; i < SIZE; i++) {
		cout << " Arr [" << i << "] = " << arr[i] << endl;
	}

}

void Sort(bool type) {
	cout << "Sort type = " << type << endl;
}

