#include <iostream>

using namespace std;

char Menu(){
	char choice = '0';
	cout << "----------------------------------------" << endl;
	cout << "+ <-> Plus\n- <-> Minus\n/ <-> Division\n* <-> Multiple\n0 <-> Exit" << endl;
	cout << "----------------------------------------" << endl;
	cin >> choice;
	return choice;
}

int Plus() {
	int a, b;
	cout << "Enter two digits: " << endl;
	cin >> a >> b;
	return a + b;
}

int Minus() {
	int a, b;
	cout << "Enter two digits: " << endl;
	cin >> a >> b;
	return a - b;
}

int Division() {
	int a, b;
	cout << "Enter two digits: " << endl;
	cin >> a >> b;
	if (b == 0) {
		cout << "Division on zero deny!" << endl;
		return 0;
	}
	else {
		return a / b;
	}
}

int Multiple() {
	int a, b;
	cout << "Enter two digits: " << endl;
	cin >> a >> b;
	return a * b;
}

int main() {

	bool exit = false;
	int result = 0;

	while (!exit) {
		char choice = Menu();
		switch (choice)
		{
		case '+':
			result = Plus();
			cout << "Sum = " << result << endl;
			break;
		case '-':
			result = Minus();
			cout << "Result = " << result << endl;
			break;
		case '/':
			result = Division();
			cout << "Result = " << result << endl;
			break;
		case '*':
			result = Multiple();
			cout << "Result = " << result << endl;
			break;
		case '0':
			cout << " Bye! " << endl;
			exit = true;
			break;

		default:
			cout << "Wrong choice!" << endl;
			break;
		}
	}
	

	cout << "After wile result ===>>> " << result << " UAH" << endl;
	

	system("pause");
	return 0;
}