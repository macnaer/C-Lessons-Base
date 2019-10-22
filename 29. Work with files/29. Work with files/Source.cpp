#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>

using namespace std;

int main() {

	ofstream writeFile;
	string path = "lib/db.txt";
	string text;
	//==================== Write  to file=================
	//writeFile.open(path);
	/*writeFile.open(path, ofstream::app);

	if (!writeFile.is_open()) {
		cout << "Can't open file!" << endl;
	}
	else {
		cout << "Enter text" << endl;
		getline(cin, text);
		writeFile << text << endl;
	}

	writeFile.close();*/
	//==================== Write  to file=================
	//==================== Read  from file=================
	ifstream readFile;
	readFile.open(path);

	/*if (!readFile.is_open()) {
		cout << "Can't open file!" << endl;
	}
	else {
		cout << "Opened" << endl;
		char data;
		while (readFile.get(data)) {
			cout << data << endl;
		}
	}*/

	string arr[6];
	int i = 0;

	string data;
	while (!readFile.eof()) {
		/*data = "";
		readFile >> data;*/
		getline(readFile, data);
		arr[i] = data;
		cout << data << endl;
		i++;
	}
	readFile.close();
	//==================== Read  from file=================
	cout << "data from arr ===>>>>" << endl;
	for (int i = 0; i < 6; i++) {
		cout << arr[i] << endl;
	}

	cout << "arr[0] = " << arr[0] << endl;
	cout << "After ===>>> " << endl;

	arr[0] = "Hello World! Hello Slavik!";
	cout << "arr[0] = " << arr[0] << endl;

	system("pause");
	return 0;
}