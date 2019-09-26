#include <iostream>
#include <string>


using namespace std;

string Fill(string name) {
	
	string res = "Hello, " + name;
	return res;
}

int main() {

	/*char name[5] = {"Bill"};
	char hello[6] = {"Hello"};
	char result[255] = {};

	cout << strlen(hello) << endl;*/
	//strcat_s(result, hello);
	//strcat_s(result, " ");
	//strcat_s(result, name);
	//cout << result << endl;

	/*cout << "Name" << name << endl;*/

	string personName = "Bill";
	string surname = " Gates ";
	string hello = "Hello mr. ";

	string res = hello + "\n" + personName + "\n" + surname;

	//cout << hello << personName << surname << endl;

	//cout << res << endl;

	string strArr[4] = {"Bill", "Stive", "Tom", "Jack"};

	for (int i = 0; i < 4; i++)
	{
		cout << strArr[i] << endl;
	}

	cout << Fill("Bob") << endl;


	system("pause");
	return 0;
}