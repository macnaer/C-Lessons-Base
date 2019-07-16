# include <iostream>

using namespace std;

int main() {

	int days[7];
	int sum = 0;

	cout << "Address => " <<days << endl;

	//days[0] = 27;
	//days[1] = 28;
	//days[2] = 24;
	//days[3] = 26;
	//days[4] = 21;
	//days[5] = 29;
	//days[6] = 32;


	//cout << days[6] << endl;
	//days[6] = 34;
	//cout << days[6] << endl;

	for (int i = 0; i < 7; i++) {
		cout << "Enter temperature for day number " << i << endl;
		cin >> days[i];
	}

	cout << "---------------------------------<" << endl;

	for (int i = 0; i < 7; i++) {
		sum += days[i];
	}

	cout << "SUM = " << sum << endl;

	sum = sum / 7;
	cout << "temp AVG = " << sum << endl;


	/*days[123] = 45;
	cout << days[123] << endl;*/

	system("pause");
	return 0;
}