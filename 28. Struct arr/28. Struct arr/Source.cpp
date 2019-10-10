#include <iostream>
#include <string>

using namespace std;

struct Book
{
	string title;
	string author;
	int pages;
	int price;

	struct { int day; string month; int year; } Date;

	void ShowBookInfo() {
		cout << "<!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!>" << endl;
		cout << "\nTitle: " << title << "\nAuthor: " << author << "\nPages: " << pages << "\nPrice: " << price << endl;
		cout << "Published day: => " << Date.day << " Month: => " << Date.month << " Year: => " << Date.year << endl;
		cout << "<!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!>" << endl;
	}


};

void SortByPrice(Book *books, int bookCount) {
	for (int i = 0; i < bookCount; i++) {
		for (int j = 0; j < bookCount - i - 1; i++) {
			if (books[j].price > books[j + 1].price) {
				swap(books[j], books[j + 1]);
			}
		}
	}
}

void CreateBookCollection(Book *books, const int booksCount) {

	for (int i = 0; i < booksCount; i++) {
		cout << "Create book number: => " << i + 1 << endl;
		cout << "Book title: =>" << endl;
		cin >> books[i].title;
		cout << "Book author: =>" << endl;
		cin >> books[i].author;
		cout << "Pages: =>" << endl;
		cin >> books[i].pages;
		cout << "Book price: =>" << endl;
		cin >> books[i].price;
		cout << "Published date => " << endl;
		cin >> books[i].Date.day;
		cin >> books[i].Date.month;
		cin >> books[i].Date.year;
		cout << "<===================================>" << endl;
		cout << "<=============Book added! ==========>" << endl;
		cout << "<===================================>" << endl;
	}
}

void ShowBook(Book *books, const int booksCount) {
	for (int i = 0; i < booksCount; i++) {
		books[i].ShowBookInfo();
	}
}

int main() {

	int booksCount = 0;
	cout << "Enter books count: " << endl;
	cin >> booksCount;

	Book *books = new Book[booksCount];
	CreateBookCollection(books, booksCount);
	ShowBook(books, booksCount);
	SortByPrice(books, booksCount);
	cout << "---()---O_o<<< " << endl;
	ShowBook(books, booksCount);


	system("pause");
	return 0;
}