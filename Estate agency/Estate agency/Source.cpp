// Предметна область   -   Агенство обміну і продажу нерухомості.
// Розв'язувані задачі -  видача довідок про характеристики нерухомості.
//                        (наприклад, район, площа квартири, кількість кімнат, поверх, ціна, адреса тощо),
//                        і заявки клієнтів (обмін, купівля або продаж, адреса і телефон, дата заявки).
// Реалізувати наступні сервіси: 
//                               Заповнення бази даних
//                               Перегляд даних про всі заявки
//                               Доповнення бази даних
//                               Видалення із бази даних
// Упорядкування по полях :   ПІБ клієнтів, площа квартир
// Пошук :   координати клієнта по прізвищу, по номеру телефона
// Вибірка : N - кімнатні квартири не на першому поверсі;
//           квартири площею від АА до ВВ у районі СС
// 	         Обчислення : середня ціна трикімнатної квартири; сумарне число заявок по районах міста
// 	         Корекція : видалення зведень про виконані заявки;
//           зміна ціни квартири заданого клієнта з ХХ на УУ
// 	         Табличний звіт : список квартир; груповання по районах і кількості кімнат
// 	         Додаткові вимоги : дата заявки не повинна бути пізніше поточного числа,
// 	         а ПІБ і адреса клієнта - не порожніми значеннями.
// 	         Для обробки даних скористатися динамічним масивом покажчиків на структури 
// 	         відповідного типу.

#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int SIZE = 9;

enum ClientChoice
{
	Buy, Sell, Exchange
};

struct Client
{
	string telNumber;
	string clientName;
	string clientSurname;
	ClientChoice clientChoice;
	void ShowClientInfom() {
		cout << "\n Telephone number:  " << telNumber << "\n Owner:             " << clientName << "   " << clientSurname << "    ";
		switch (clientChoice)
		{
		case ClientChoice::Buy:
			cout << "Buy" << endl;
			break;
		case ClientChoice::Sell:
			cout << "Sell" << endl;
			break;
		case ClientChoice::Exchange:
			cout << "Exchange" << endl;
			break;
		}
	}
};

struct Address {
	Client client; // Через дане поле структури ми можемо доступитися до будь якого поля або функції структури Client 
	string city;
	string district;
	string street;
	int houseNumber;
	int flatNumber;
	int roomsAmount;
	int area;
	int floor;
	int price;

	void ShowAddress() {
		cout << "\n City:              " << city << "\n District:          " << district << "\n Street:            " << street << "\n House number:      " << houseNumber;
		cout << "\n Flat Number:       " << flatNumber << "\n Amount of rooms:   " << roomsAmount << "\n Area:              " << area << "\n Floor:             " << floor << "\n Price:             " << price;
	}
};

//void ShowClientInfo(Client client) // Аналог функції ShowClientInfom, яка описана в структурі Client
//{
//	cout << "\n Telephone number:  " << client.telNumber << "\n Owner:             " << client.clientName << "   " << client.clientSurname;
//}


void FillAddress(Address*& data) {
	char temp[255];
	string path = "db.txt";
	ifstream readFile;

	string tempHouseNumber;

	readFile.open(path);
	if (!readFile.is_open()) {
		cout << "Can't open file!" << endl;
	}
	else {
		readFile.getline(temp, 255);  // зчитуємо рядок в змінну temp типу char[] 
		SIZE = atoi(temp); // atoi переводить з char* або char[] в int // переводим temp (char[]) в SIZE (int)  
		data = new Address[SIZE];
		for (int i = 0; i < SIZE; i++)
		{
			readFile.getline(temp, 255);
			data[i].city = temp;
			readFile.getline(temp, 255);
			data[i].district = temp;
			readFile.getline(temp, 255);
			data[i].street = temp;
			readFile.getline(temp, 255);
			data[i].houseNumber = atoi(temp);
			readFile.getline(temp, 255);
			data[i].flatNumber = atoi(temp);
			readFile.getline(temp, 255);
			data[i].roomsAmount = atoi(temp);
			readFile.getline(temp, 255);
			data[i].area = atoi(temp);
			readFile.getline(temp, 255);
			data[i].floor = atoi(temp);
			readFile.getline(temp, 255);
			data[i].client.telNumber = temp;
			readFile.getline(temp, 255);
			data[i].client.clientName = temp;
			readFile.getline(temp, 255);
			data[i].client.clientSurname = temp;
			readFile.getline(temp, 255);
			data[i].client.clientChoice = (ClientChoice)atoi(temp);
			readFile.getline(temp, 255);
			data[i].price = atoi(temp);

		}
	}
	readFile.close();

}

void ShowAddressForBuy(Address* data)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (data[i].client.clientChoice == Buy)
		{
			data[i].ShowAddress();
			data[i].client.ShowClientInfom();
		}
	}
}

void PrintAddress(Address* data) {
	for (int i = 0; i < SIZE; i++) {
		cout << "Index of property [" << i << "]" << endl;
		data[i].ShowAddress();
		data[i].client.ShowClientInfom();
		cout << "\n===============================================" << endl;
	}
}

void SwapData(Address& data1, Address& data2) // ф-я для зміни місцями даних (для використання у ф-ях сортування)
{
	Address tempData;

	tempData.city = data1.city;
	tempData.district = data1.district;
	tempData.street = data1.street;
	tempData.houseNumber = data1.houseNumber;
	tempData.flatNumber = data1.flatNumber;
	tempData.roomsAmount = data1.roomsAmount;
	tempData.area = data1.area;
	tempData.floor = data1.floor;
	tempData.client.telNumber = data1.client.telNumber;
	tempData.client.clientName = data1.client.clientName;
	tempData.client.clientSurname = data1.client.clientSurname;
	tempData.client.clientChoice = data1.client.clientChoice;
	tempData.price = data1.price;

	data1.city = data2.city;
	data1.district = data2.district;
	data1.street = data2.street;
	data1.houseNumber = data2.houseNumber;
	data1.flatNumber = data2.flatNumber;
	data1.roomsAmount = data2.roomsAmount;
	data1.area = data2.area;
	data1.floor = data2.floor;
	data1.client.telNumber = data2.client.telNumber;
	data1.client.clientName = data2.client.clientName;
	data1.client.clientSurname = data2.client.clientSurname;
	data1.client.clientChoice = data2.client.clientChoice;
	data1.price = data2.price;

	data2.city = tempData.city;
	data2.district = tempData.district;
	data2.street = tempData.street;
	data2.houseNumber = tempData.houseNumber;
	data2.flatNumber = tempData.flatNumber;
	data2.roomsAmount = tempData.roomsAmount;
	data2.area = tempData.area;
	data2.floor = tempData.floor;
	data2.client.telNumber = tempData.client.telNumber;
	data2.client.clientName = tempData.client.clientName;
	data2.client.clientSurname = tempData.client.clientSurname;
	data2.client.clientChoice = tempData.client.clientChoice;
	data2.price = tempData.price;
}

void CopyAddress(Address& data1, Address data2) // копіює дані з одної змінної Address в іншу //ф-я для перезаписування(зміни) даних
{
	data1.city = data2.city;
	data1.district = data2.district;
	data1.street = data2.street;
	data1.houseNumber = data2.houseNumber;
	data1.flatNumber = data2.flatNumber;
	data1.roomsAmount = data2.roomsAmount;
	data1.area = data2.area;
	data1.floor = data2.floor;
	data1.client.telNumber = data2.client.telNumber;
	data1.client.clientName = data2.client.clientName;
	data1.client.clientSurname = data2.client.clientSurname;
	data1.client.clientChoice = data2.client.clientChoice;
	data1.price = data2.price;
}

void AddNewAddress(Address*& arrData, Address data) // Address *&arrData - вказівник на посилання масиву адрес  // Address data - параметр для введення нової адреси
{
	Address* newData = new Address[SIZE + 1];
	for (int i = 0; i < SIZE; i++)
	{
		CopyAddress(newData[i], arrData[i]);
	}
	CopyAddress(newData[SIZE], data);

	delete[] arrData;
	arrData = newData;
	SIZE++;
}

void RemoveAddressFromList(Address*& arrData, int index)
{
	Address* newData = new Address[SIZE - 1];

	for (int i = 0; i < index; i++)
	{
		CopyAddress(newData[i], arrData[i]);
	}
	for (int i = index + 1; i < SIZE; i++)
	{
		CopyAddress(newData[i - 1], arrData[i]);
	}

	delete[] arrData;
	arrData = newData;
	SIZE--;
}
void EditAddressInformation(Address * &data, int index, Address address)
{
	data[index].city = address.city;
	data[index].district = address.district;
	data[index].street = address.street;
	data[index].houseNumber = address.houseNumber;
	data[index].flatNumber = address.flatNumber;
	data[index].roomsAmount = address.roomsAmount;
	data[index].area = address.area;
	data[index].floor = address.floor;
	data[index].client.telNumber = address.client.telNumber;
	data[index].client.clientName = address.client.clientName;
	data[index].client.clientSurname = address.client.clientSurname;
	data[index].client.clientChoice = address.client.clientChoice;
	data[index].price = address.price;
}
void SortByDistrict(Address * &data)  // Address*& (тип) - посилання на вказівник на структуру // data - масив нерухомості
{
	for (int i = 0; i < SIZE - 1; i++) {
		for (int j = 0; j < SIZE - i - 1; j++)
		{
			if (_strcmpi(data[j].district.c_str(), data[j + 1].district.c_str()) > 0) // _strcmpi (вбудована ф-я з бібліотеки) порівнює рядки згідно таблиці ASCII
																						// c_str (вбудована ф-я з бібліотеки) переводить string в char* (тому що ф-я _strcmpi не приймає string )
			{
				SwapData(data[j], data[j + 1]);
			}
		}
	}
}
void SortByOwnersSurname(Address * &data)  // Address*& - посилання на вказівник на структуру // data - масив нерухомості
{
	for (int i = 0; i < SIZE - 1; i++) {
		for (int j = 0; j < SIZE - i - 1; j++)
		{
			if (_strcmpi(data[j].client.clientSurname.c_str(), data[j + 1].client.clientSurname.c_str()) > 0) // _strcmpi (вбудована ф-я з бібліотеки) порівнює рядки згідно таблиці ASCII
																						// c_str (вбудована ф-я з бібліотеки) переводить string в char* (тому що ф-я _strcmpi не приймає string )
			{
				SwapData(data[j], data[j + 1]);
			}
		}
	}
}

void SortByPrice(Address * &data) {
	for (int i = 0; i < SIZE - 1; i++)
	{
		for (int j = 0; j < SIZE - i - 1; j++)
		{
			if (data[j].price > data[j + 1].price)
			{
				SwapData(data[j], data[j + 1]);
			}
		}
	}
}
void SortByArea(Address * &data) {
	for (int i = 0; i < SIZE - 1; i++)
	{
		for (int j = 0; j < SIZE - i - 1; j++)
		{
			if (data[j].area > data[j + 1].area)
			{
				SwapData(data[j], data[j + 1]);
			}
		}
	}
}
void SortByRoomsAmount(Address * &data) {
	for (int i = 0; i < SIZE - 1; i++)
	{
		for (int j = 0; j < SIZE - i - 1; j++)
		{
			if (data[j].roomsAmount > data[j + 1].roomsAmount)
			{
				SwapData(data[j], data[j + 1]);
			}
		}
	}
}
void SearchByDistrict(Address * data, string district)
{
	for (int i = 0; i < SIZE; i++) {
		if (data[i].district.find(district) != string::npos) // Якщо people[i].name не містить name, тоді функція повертає string::npos // find - функція, яка перевіряє наявність строки в строці
		{
			data[i].ShowAddress();
		}
	}
}
void SearchByRooms(Address * data, int room)
{
	bool isRoom = false;
	for (int i = 0; i < SIZE; i++) {
		if (data[i].roomsAmount == room)
		{
			isRoom = true;
			data[i].ShowAddress();
			cout << endl << endl;
		}
	}
	if (!isRoom) {
		cout << " There are no any available " << room << " rooms flats!" << endl;
	}
	cout << "----------------------------------------------------" << endl;
}
void SearchByFloor(Address * data, int floor)
{
	bool isFloor = false;
	for (int i = 0; i < SIZE; i++) {
		if (data[i].floor == floor)
		{
			isFloor = true;
			data[i].ShowAddress();
			cout << endl << endl;
		}
	}
	if (!isFloor) {
		cout << " There are no any available rooms on the  " << floor << " flats!" << endl;
	}
	cout << "----------------------------------------------------" << endl;
}
void AveragePrice(Address * data, int room) {
	int roomCounter = 0;
	int priceSum = 0;
	for (int i = 0; i < SIZE; i++) {
		if (data[i].roomsAmount == room) {
			roomCounter++;
			priceSum += data[i].price;
		}
	}
	cout << " Average Price for " << room << " rooms flat is:   " << priceSum / roomCounter << endl;
	cout << "----------------------------------------------------" << endl;
}
void TableReport(Address * address) {
	cout << "City" << setw(20) << "District" << setw(25) << "Street" << setw(20) << "House number" << setw(20) << "Flat Number" << setw(20) << "Amount of rooms" << setw(10) << "Area" << setw(10) << "Floor" << setw(10) << "Price" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << address[i].city << setw(20) << address[i].district << setw(25) << address[i].street << setw(20) << address[i].houseNumber << setw(20) << address[i].flatNumber << setw(20) << address[i].roomsAmount << setw(10) << address[i].area << setw(10) << address[i].floor << setw(10) << address[i].price << endl;
	}
}
void Menu() {
	enum Choice {
		FillAndShow = 1, AddNewProperty = 2, DeleteProperty = 3, EditInformation = 4, SortDistrict = 5, SortSurname = 6, SortPrice = 7, SortArea = 8, SearchDistrict = 9, SeachRoomsAmount = 10, SearchFloor = 11, AveragePrices = 12, TableInfo = 13, Exit = 0
	};
	Address* data;
	string city;
	string district;
	string street;
	int houseNumber;
	int flatNumber;
	int roomsAmount;
	int area;
	int floor;
	int choice;
	int room;
	int price;
	int tempInt;
	int index = 0;

	string path = "db.txt";
	ofstream writeFile;

	cout << " Hello! Our real estate agency is ready to help you if you want to buy property or to sell it!\n " << endl;

	FillAddress(data);  // Якщо написати за межами циклу, то масив заповнюється автоматично (щоб покеазати інф-ю - треба викликати ф-ю прінт(її викликаємо в циклі коли потрібно))
	for (;;)
	{
		cout << " Press:\n 0 - to Exit!\n 1 - to watch what properties are available\n 2 - to Add New real estate property for sale\n 3 - To Delete real estate property from the list" << endl;
		cout << " 4 - to Edit Information\n 5 - to Sort by district\n 6 - to Sort by Owner's Surname\n 7 - to Sort by Price\n 8 - to Sort by Area\n 9 - to Search by District\n 10 - to Search by Rooms amount" << endl;
		cout << " 11 - to Search by floor\n 12 - to know the average price for X-rooms flat\n 13 - to show all information in a table" << endl;
		cin >> choice;
		Address tempdata;
		switch (choice) {
		case Choice::FillAndShow:
			cout << "Available real estate properties:\n " << endl;
			cout << "-------------------------------------" << endl;
			PrintAddress(data);
			break;
		case Choice::AddNewProperty:

			cout << "Enter the name of the city: ";
			cin >> tempdata.city;
			cout << "Enter the district: ";
			cin >> tempdata.district;
			cout << "Enter the street: ";
			cin >> tempdata.street;
			cout << "Enter a house Number: ";
			cin >> tempdata.houseNumber;
			cout << "Enter flat Number: ";
			cin >> tempdata.flatNumber;
			cout << "Enter Amount of rooms: ";
			cin >> tempdata.roomsAmount;
			cout << "Enter the area: ";
			cin >> tempdata.area;
			cout << "Enter the floor: ";
			cin >> tempdata.floor;
			cout << "Enter the Telephone Number: ";
			cin >> tempdata.client.telNumber;
			cout << "Enter the Client's Name: ";
			cin >> tempdata.client.clientName;
			cout << "Enter the Client's Surname: ";
			cin >> tempdata.client.clientSurname;
			cout << "Enter the Client's Choice (0 to buy, 1 to sale, 2 to exchange): ";
			cin >> tempInt;
			tempdata.client.clientChoice = (ClientChoice)tempInt;
			cout << "Enter the price: ";
			cin >> tempdata.price;
			AddNewAddress(data, tempdata);
			PrintAddress(data);
			break;
		case Choice::DeleteProperty:
			cout << " Enter index of data you want to delete:   " << endl;
			cin >> index;
			RemoveAddressFromList(data, index);
			PrintAddress(data);
			break;
		case Choice::EditInformation:
			cout << "Enter index of a property you want to edit: ";
			cin >> index;
			cout << "Enter the name of the city: ";
			cin >> tempdata.city;
			cout << "Enter the district: ";
			cin >> tempdata.district;
			cout << "Enter the street: ";
			cin >> tempdata.street;
			cout << "Enter a house Number: ";
			cin >> tempdata.houseNumber;
			cout << "Enter flat Number: ";
			cin >> tempdata.flatNumber;
			cout << "Enter Amount of rooms: ";
			cin >> tempdata.roomsAmount;
			cout << "Enter the area: ";
			cin >> tempdata.area;
			cout << "Enter the floor: ";
			cin >> tempdata.floor;
			cout << "Enter the Telephone Number: ";
			cin >> tempdata.client.telNumber;
			cout << "Enter the Client's Name: ";
			cin >> tempdata.client.clientName;
			cout << "Enter the Client's Surname: ";
			cin >> tempdata.client.clientSurname;
			cout << "Enter the Client's Choice (0 to buy, 1 to sale, 2 to exchange): ";
			cin >> tempInt;
			tempdata.client.clientChoice = (ClientChoice)tempInt;
			cout << "Enter the price: ";
			cin >> tempdata.price;
			EditAddressInformation(data, index, tempdata); // Назва ф-ї і назва еnum НЕ МОЖЕ збігатися!!!	
			PrintAddress(data);
			break;
		case Choice::SortDistrict:
			SortByDistrict(data);
			PrintAddress(data);
			break;
		case Choice::SortSurname:
			SortByOwnersSurname(data);
			PrintAddress(data);
			break;
		case Choice::SortPrice:
			SortByPrice(data);
			PrintAddress(data);
			break;
		case Choice::SortArea:
			SortByArea(data);
			PrintAddress(data);
			break;
		case Choice::SearchDistrict:
			cout << "Enter the Distric: ";
			cin >> district;
			SearchByDistrict(data, district);
			break;
		case Choice::SeachRoomsAmount:
			cout << "Enter Number of Rooms:  ";
			cin >> room;
			SearchByRooms(data, room);
			break;
		case Choice::SearchFloor:
			cout << "Enter the Floor:  ";
			cin >> floor;
			SearchByFloor(data, floor);
			break;
		case Choice::AveragePrices:
			cout << " Enter how many rooms flat average price you want to know:  ";
			cin >> room;
			AveragePrice(data, room);
			break;
		case Choice::TableInfo:
			TableReport(data);
			break;
		}
		if (choice == Choice::Exit)
		{
			writeFile.open(path);
			if (!writeFile.is_open()) {
				cout << "Can't open file!" << endl;
			}
			else {
				writeFile << SIZE << endl;
				for (int i = 0; i < SIZE; i++)
				{
					writeFile << data[i].city << endl;
					writeFile << data[i].district << endl;
					writeFile << data[i].street << endl;
					writeFile << data[i].houseNumber << endl;
					writeFile << data[i].flatNumber << endl;
					writeFile << data[i].roomsAmount << endl;
					writeFile << data[i].area << endl;
					writeFile << data[i].floor << endl;
					writeFile << data[i].client.telNumber << endl;
					writeFile << data[i].client.clientName << endl;
					writeFile << data[i].client.clientSurname << endl;
					writeFile << data[i].client.clientChoice << endl;
					writeFile << data[i].price << endl;
				}
			}
			writeFile.close();
			break;
		}
	}
	delete[]data;
}

int main() {
	Menu();
	system("pause");
	return 0;
}