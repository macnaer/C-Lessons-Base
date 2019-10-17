#include <iostream>
#include <string>

using namespace std;

struct Player{
	string name;
	string surname;
	unsigned short age;
	string position;
	int price;
	void ShowPlayer() {
		cout << "========================>>>>>>>>>>>>>>>" << endl;
		cout << "Name: " << name << "\nSurname: " << surname << "\nAge: " << age << "\nPrice: " << price << endl;
		cout << "========================>>>>>>>>>>>>>>>" << endl;
	}
};

struct Team {
	string country;
	string city;
	string name;
	string coach;
	unsigned int wins;
	unsigned int draws;
	unsigned int loses;
private:
	short teamSize;
public:
	void ShowTeamInfo() {
		cout << "Country: " << country << "\nCity: " << city << "\nName: " << name << "\nCoach: " << coach << "\nWins: " << wins << "\nDrows: " << draws << "\nLoses: " << loses << "\nTeam Size" << teamSize << endl;
	}
	void SetTeamSize(short newName) {
		teamSize = newName;
	}
	short GetTeamSize() {
		return teamSize;
	}
	void GetMemory() {
		player = new Player[teamSize];
	}
	Player *player = nullptr;
};

void FillPlayer(Player *player, const int teamSize) {
	for (int i = 0; i < teamSize; i++) {
		cout << "Enter player name: ";
		cin >> player[i].name;
		cout << "Enter player surname: ";
		cin >> player[i].surname;
		cout << "Enter player age: ";
		cin >> player[i].age;
		cout << "Enter player position: ";
		cin >> player[i].position;
		cout << "Enter player price: ";
		cin >> player[i].price;
		//player[i].ShowPerson();
	}
}

void ShowPerson(Player *player, const int teamSize) {
	cout << "========================<<<<<<<>>>>>>=====================" << endl;
	for (int i = 0; i < teamSize; i++) {
		player[i].ShowPlayer();
		cout << "+++++O_o-----" << endl;
	}
	cout << "========================<<<<<<<>>>>>>=====================" << endl;
}

int main() {

	int teamSize = 0;
	cout << "Enter team size: " << endl;
	cin >> teamSize;

	Team Karpatu;

	Karpatu.country = "Ukraine";
	Karpatu.name = "Karpaty";
	Karpatu.city = "Lviv";
	Karpatu.coach = "Trapatoni";
	Karpatu.wins = 43;
	Karpatu.draws = 3;
	Karpatu.loses = 12;
	Karpatu.SetTeamSize(teamSize);
	Karpatu.GetMemory();
	Karpatu.ShowTeamInfo();

	FillPlayer(Karpatu.player, Karpatu.GetTeamSize());
	ShowPerson(Karpatu.player, Karpatu.GetTeamSize());


	int dteamSize = 0;
	cout << "Enter team size: " << endl;
	cin >> dteamSize;

	Team Dynamo;

	Dynamo.country = "Ukraine";
	Dynamo.name = "Dynamo";
	Dynamo.city = "Kiev";
	Dynamo.coach = "Sheva";
	Dynamo.wins = 43;
	Dynamo.draws = 3;
	Dynamo.loses = 12;
	Dynamo.SetTeamSize(dteamSize);
	Dynamo.GetMemory();
	Dynamo.ShowTeamInfo();

	FillPlayer(Dynamo.player, Dynamo.GetTeamSize());
	ShowPerson(Dynamo.player, Dynamo.GetTeamSize());

	cout << "=========================================" << endl;
	cout << "=========================================" << endl;
	ShowPerson(Dynamo.player, Dynamo.GetTeamSize());
	cout << "=========================================" << endl;
	ShowPerson(Karpatu.player, Karpatu.GetTeamSize());
	cout << "=========================================" << endl;
	cout << "=========================================" << endl;



	delete[] Karpatu.player;
	delete[] Dynamo.player;

	//int teamSize = 0;
	//cout << "Enter team size: " << endl;
	//cin >> teamSize;

	//Player *player = new Player[teamSize];
	//FillPlayer(player, teamSize);
	//ShowPlayer(player, teamSize);
	//

	//delete [] player;
	




	system("pause");
	return 0;
}