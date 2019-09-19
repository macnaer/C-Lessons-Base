#include <iostream>
#include <ctime>

using namespace std;

int main() {
	srand(unsigned(time(NULL)));

	int col = 0, row = 0;
	cout << "Enter matrix size: [row first] => " << endl;
	cin >> row >> col;

	int **arr = new int *[row];

	for (int i = 0; i < row; i++) {		
		arr[i] = new int[col];
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





	system("pause");
	return 0;
}