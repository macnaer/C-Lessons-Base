# include <iostream>

using namespace std;


int main() {
	enum Days {
		Monday = 1,
		Tuesday = 2,
		Wednesday = 3,
		Thursday = 4,
		Friday = 5,
		Saturday = 6,
		Sunday = 7
	};

	cout << Days::Monday << endl;
	
	int choice = 0;
	cout << "Enter day of week" << endl;
	cin >> choice;

	switch (choice) {
	case Monday:
		cout << "Monday is a day number  1" << endl;
		break;
	case Tuesday:
		cout << "Tuesday is a day number  2" << endl;
		break;
	default:
		cout << "Wrong choice:" << endl;
		break;
	}

	

	system("pause");
	return 0;
}