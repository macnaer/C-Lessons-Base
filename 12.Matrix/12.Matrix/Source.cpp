#include <iostream>
#include <ctime>

using namespace std;


int main() {
	srand(unsigned(time(NULL)));
	const int ROW = 3;
	const int COL = 4;
	float arr[ROW][COL];


	/*arr[0][0] = 12;
	arr[0][1] = 3;
	arr[1][3] = 33;*/

	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			arr[i][j] = rand() % 20 + 1;
		}
	}

	//arr[0][1] = 34.8;

	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			cout << "arr[" << i << "] " << "[" << j << "] = " << arr[i][j] << endl;
		}
		cout << endl;
	}

	

	system("pause");
	return 0;
}