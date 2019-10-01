#include <iostream>
#include <ctime>

using namespace std;

void CreateArr(int ** &arr, int row, int col) {
	arr = new int*[row];

	for (int i = 0; i < row; i++) {
		arr[i] = new int [col];
	}
}

void DeleteArr(int ** arr, int row) {

	for (int i = 0; i < row; i++) {
		delete[] arr[i];
	}

	delete[] arr;
}

void FillArr(int ** arr, int row, int col) {

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = rand() % 10 + 1;
		}
	}
}

void PrintArr(int ** arr, int row, int col) {

	cout << "-------------------------------------" << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "-------------------------------------" << endl;
}


int main() {
	srand(unsigned(time(NULL)));
	int **matrix = NULL;
	int col = 0, row = 0;
	cout << "Enter row and col =>" << endl;
	cin >> row >> col;

	CreateArr(matrix, row, col);
	FillArr(matrix, row, col);
	PrintArr(matrix, row, col);
	DeleteArr(matrix, row);

	system("pause");
	return 0;
}