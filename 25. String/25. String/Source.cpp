#include <iostream>


using namespace std;

int main() {

	char name[5] = {"Bill"};
	char hello[6] = {"Hello"};
	char result[255] = {};

	cout << strlen(hello) << endl;
	//strcat_s(result, hello);
	//strcat_s(result, " ");
	//strcat_s(result, name);
	//cout << result << endl;

	cout << "Name" << name << endl;



	system("pause");
	return 0;
}