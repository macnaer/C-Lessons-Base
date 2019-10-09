#include <iostream>
#include <string>

using namespace std;

struct Library {
	string name;
	string address;
	string director;
	int bookCount;

	void ShowLibraryInfo() {
		cout << "Name: " << name << "\nAddress: " << address << "\nDirector: " << director << "\nBook Count: " << bookCount << endl;
	}

};

/*typedef struct {
	string name;
} Library;*/

void CreateLibrary(Library *lib) {
	cout << "Enter library name =>" << endl;
	cin >> lib->name;
	cout << "Enter library address =>" << endl;
	cin >> lib->address;
	cout << "Diretor name => " << endl;
	cin >> lib->director;
	cout << "Enter book count => " << endl;
	cin >> lib->bookCount;
	cout << "\nLibrary created." << endl;
}

int main() {

	Library lib;
	CreateLibrary(&lib);
	lib.ShowLibraryInfo();

	system("pause");
	return 0;
}