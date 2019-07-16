# include <iostream>


using namespace std;

int main() {

	int count = 0;
	int i = 0;
	int number = 0;
	int result = 0;


	cout << "Enter digits count: " << endl;
	cin >> count;

	while (i < count) {
		i++;
		cout << "Enter digit ¹ " << i << endl;
		cin >> number;
		if (number %2 == 0) {
			cout << "Works!!! " <<number << endl;
			result += number;
		}
	}

	cout << "Your result = " << result << endl;;


	system("pause");
	return 0;
}