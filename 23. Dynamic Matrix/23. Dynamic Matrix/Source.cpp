#include <iostream>
#include <ctime>

using namespace std;

int main() {
	srand(unsigned(time(NULL)));

	int col, row;
	cout << "Enter matrix size: [row first] => " << endl;
	cin >> row >> col;

	int **arr = new int *[row];

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			int *arr = new int[row];
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << arr[i][j] << endl;
		}
	}


	//for (int i = 0; i < row; i++) {
	//	for (int j = 0; j < col; j++) {
	//		delete[] arr;
	//	}
	//}


	delete[] arr;





	system("pause");
	return 0;
}