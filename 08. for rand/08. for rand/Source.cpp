# include <iostream>
# include <ctime>
using namespace std;

int main() {
	srand(unsigned(time(NULL)));

	int number = 0;

	for (int i = 0; i < 5; i++) {
		number = rand() % 10;
		cout << "Number = " << number << endl;
	}

	system("pause");
	return 0;
}