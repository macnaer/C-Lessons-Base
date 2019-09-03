#include <iostream>
using namespace std;


template <typename T1, class T2>
void Sum(T1 *a, T2 *b, T1 *res);




int main() {

	double a = 10;
	int b = 40;
	double res = 0;

	double *pRes = &res;
	double *pA = &a;
	int *pB = &b;
	cout << "----------------------Before--------------------" << endl;
	cout << "*a => " << *pA << " a => address => " << pA << endl;
	cout << "*b => " << *pB << " b => address => " << pB << endl;
	cout << "*res => " << *pRes << " res => address => " << pRes << endl;
	cout << "----------------------Before--------------------" << endl;


	Sum(pA, pB, pRes);

	cout << "----------------------After--------------------" << endl;
	cout << "*a => " << *pA << " a => address => " << pA << endl;
	cout << "*b => " << *pB << " b => address => " << pB << endl;
	cout << "*res => " << *pRes << " res => address => " << pRes << endl;
	cout << "----------------------After--------------------" << endl;

	system("pause");
	return 0;
}

template <typename T1, class T2>

void Sum(T1 *a, T2 *b, T1 *res) {
	cout << "----------------------Sum--------------------" << endl;
	cout << "*a => " << *a << " a => address => " << a << endl;
	cout << "*b => " << *b << " b => address => " << b << endl;
	cout << "*res => " << *res << " res => address => " << res << endl;
	(*a)++;
	*b = 300;
	*res = *a + *b;
	cout << "----------------------Sum--------------------" << endl;

}