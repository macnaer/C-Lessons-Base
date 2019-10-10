#include <iostream>
#include <string>

using namespace std;

struct Player {
	string name;
	string surname;
	int price;
	void ShowPlayer() {
		cout << "Name: " << name << "\nSurname: " << surname << "\nPrice: " << price << "\nPosition: " << position << endl;
	}
	string position;
};

struct Team {
	string name;
	string country;
	string city;
	int wins;
	int draw;
	int lose;
	int size;

	void SetTeamSize(int newSize) {
		size = newSize;
	}
	void ShowTeam() {
		cout << "Name: " << name << "\nCountry: " << country << "\nCity: " << city << "\nWins: " << wins << "\nDraw: " << draw << "\nLose" << "\nTeam size: " << size << endl;
	}
	void GetMem() {
		player = new Player[size];
	}

	Player *player = nullptr;  //new Player[size];
};


void FillPlayer(Player *player, int size) {
	for (int i = 0; i < size; i++) {
		cout << "Enter player name: " << endl;
		cin >> player[i].name;
		cout << "Enter player surname: " << endl;
		cin >> player[i].surname;
		cout << "Enter player position: " << endl;
		cin >> player[i].position;
		cout << "Enter player price: " << endl;
		cin >> player[i].price;
	}
}

void ShowPlayer(Player *player, int size) {
	cout << "===================================>>>>>>>>>>>>>>>>>>>>>" << endl;
	for (int i = 0; i < size; i++) {
		player[i].ShowPlayer();
	}
	cout << "===================================>>>>>>>>>>>>>>>>>>>>>" << endl;
}



int main() {

	Team Karpaty;
	Karpaty.name = "Karpaty";
	Karpaty.city = "Lviv";
	Karpaty.country = "Ukraine";
	Karpaty.wins = 23;
	Karpaty.draw = 3;
	Karpaty.lose = 3;
	Karpaty.size = 3;
	Karpaty.GetMem();
	Karpaty.ShowTeam();

	FillPlayer(Karpaty.player, Karpaty.size);
	ShowPlayer(Karpaty.player, Karpaty.size);

	system("pause");
	return 0;
}