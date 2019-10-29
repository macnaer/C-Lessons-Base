#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Books {

	string title;
	string desc;
	string author;
	int pages = 0;


	void CreateBook() {
		string newTitle;
		cout << "Enter book title" << endl;
		cin >> newTitle;
		title = newTitle;
		author = "Shevchenko";
		desc = "Ukrainian book";
		pages = 500;
	}

	void ShowBook() {
		cout << "Title: " << title << "\nDescription: " << desc << "\nAuthor: " << author << "\nPages: " << pages << endl;
	}
};


int main() {

	Books book;   // Єкземпляр структури
	book.CreateBook(); 
	/*book.ShowBook();*/

	ofstream writeFile;
	string path = "db.txt";

	//==================== Write  to file=================
	//writeFile.open(path, ofstream::app);

	//if (!writeFile.is_open()) {
	//	cout << "Can't open file!" << endl;
	//}
	//else {
	//	/*cout << sizeof(Books) << endl;*/
	//	writeFile.write((char*)&book, sizeof(Books));
	//	cout << "Saved" << endl;
	//}

	//writeFile.close();
	//==================== Write  to file=================
	//==================== Read  from file=================
	ifstream readFile;
	readFile.open(path);

	int i = 0;

	if (!readFile.is_open()) {
		cout << "Can't load data from file." << endl;
	}
	else {
		cout << "Loading ..." << endl;
		Books b;
		cout << "Book size = " << sizeof(book);
		cout << "B size = " << sizeof(b);
		readFile.read((char *), sizeof(b));
		/*for (int i = 0; i < 1; i++) {
			readFile.read((char *)&b, sizeof(b));
			b.ShowBook();
		}*/
		
	}

	
	
	readFile.close(); 
	
	system("pause");
	return 0;
}