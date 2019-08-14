#include <iostream>


using namespace std;

int main() {

	int arr2[] = { 4,5,-1,6,-5,-9,80 };
	bool flag = true;
	short first = 0;



	for (int i = 0; i < 7; i++) {
		cout << "arr2[" << i << "] = " << arr2[i] << endl;
		if (flag) {
			if (arr2[i] < 0) {
				first = i;
				cout << "First = " << first << endl;
				flag = false;
			}
		}
	}



	system("pause");
	return 0;
}