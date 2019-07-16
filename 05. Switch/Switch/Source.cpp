# include <iostream>

using namespace std;


int main() {
	/*int a = 0, b = 0, c = 0;
	cout << "Enter three digits: " << endl;
	cin >> a >> b >> c;

	if (a < b && a < c) {
		cout << "a " << endl;
	}
	else if (b < a && b < c) {
		cout << "b " << endl;
	}
	else if (c < a && c < b) {
		cout << "c " << endl;
	}
	else {
		cout << "Try again!" << endl;
	}*/



	//int res = 0, a = 0, b = 0, c = 0;
	//cout << "Enter three digits: " << endl;
	//cin >> a >> b >> c;
	//res = a > b ? (a > c ? a : c) : (b > c ? b : c);

	//cout << "Result = " << res <<endl;

	int day = 0;
	cout << "Enter day number: " << endl;
	cin >> day;

	switch (day) {
		case 1: 
			cout << "Monday" << endl;
			break;
		case 2: 
			cout << "T" << endl;
			break;
		default:
			cout << "Wrong choice!" << endl;
			break;
	}

	system("pause");
	return 0;
}