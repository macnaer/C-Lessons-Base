#include <iostream>
#include <ctime>

using namespace std;

int main() {
	srand(unsigned(time(NULL)));

	int col = 0, row = 0;
	cout << "Enter matrix size: [row first] => " << endl;
	cin >> row >> col;

	int **arr = new int *[row]; // ¬каз≥вник на вказ≥вники

	for (int i = 0; i < row; i++) {		
		arr[i] = new int[col];   // ¬каз≥вник на новий р€док
	}


	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = rand() % 10 + 1;
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}


	for (int i = 0; i < row; i++) {
		delete[] arr[i];   
	}

	delete[] arr;
	arr = nullptr;

	system("pause");
	return 0;
}