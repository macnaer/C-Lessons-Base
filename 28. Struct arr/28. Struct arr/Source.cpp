#include <iostream>
#include <string>

using namespace std;

struct Book {
	string title;
	string author;
	int price;
	int pages;

	void ShowBookInfo() {
		cout << "<=======================================>" << endl;
		cout << "\nTitle: " << title << "\nAuthor: " << author << "\nPages: " << pages << "\nBook price: " <<price << endl;
		cout << "<=======================================>" << endl;
	}
};

void ShowBooksInfo(Book *books, int bookCount) {
	for (int i = 0; i < bookCount; i++) {
		books[i].ShowBookInfo();
	}
}

void CreateBookCollection(Book *books, int bookCount) {
	for (int i = 0; i < bookCount; i++) {
		cout << "Book number :" << i + 1 << endl;
		cout << "Enter book name :" << endl;
		cin >> books[i].title;
		cout << "Enter author :" << endl;
		cin >> books[i].author;
		cout << "Enter price :" << endl;
		cin >> books[i].price;
		cout << "Pages count :" << endl;
		cin >> books[i].pages;
	}
}

void SortByPrice(Book *books, int bookCount) {
	for (int i = 0; i < bookCount; i++) {
		for (int j = 0; j < bookCount - i - 1; i++) {
			if (books[j].price > books[j + 1].price) {
				swap(books[j], books[j + 1]);
			}
		}
	}
}

int main() {

	int bookCount = 0;
	cout << "Enter book count: =>" << endl;
	cin >> bookCount;
	Book *books = new Book[bookCount];

	CreateBookCollection(books, bookCount);
	ShowBooksInfo(books, bookCount);

	system("pause");
	return 0;
}