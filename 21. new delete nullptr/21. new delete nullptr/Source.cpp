# include <iostream>

using namespace std;

int main() {

	int *pA = new int;
	*pA = 40;

	cout << "*pA value =>  " << *pA << " *pA address => " << pA << endl;


 	delete pA;
	

	//pA = 0;
	//pA = NULL;

	pA = nullptr;

	cout << " *pA address => " << pA << endl; 



	system("pause");
	return 0;
}