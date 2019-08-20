# include <iostream>
# include <ctime>

using namespace std;

//Написати наступні функції, які в якості параметра приймають одновимірний масив і його розмірністю.Перевірити роботу функції для одновимірних масивів довжини 10 та довжини 7.
//функцію Fill(), яка заповнює одновимірний масив випадковими значеннями в діапазоні[-12..20]
//шаблонну функцію Print(), яка виводить елементи масиву на екран.Примітка!Протестувати дану функцію на масивах типу int, double, char
//функцію, яка повертає кількість відємних елементів масиву
//перевантажені функції :
//-для знаходження середнього арифметичного елементів масиву
//- для знаходження максимального елемента масиву

//------------------------------------------------->>>>>
// Class work example
//int Sum(int a, int b);
//double Sum(double a, double b);
//
//template <typename T>
//T MySum(T a, T b);
//
//template <typename T>
//T MySum(T a, T b, T c);
//
//template <typename T1, typename T2>
//T1 MySum(T1 a, T2 b);
//------------------------------------------------->>>>>


void Fill(int arr[], const int SIZE);
void Fill(double arr[], const int SIZE);
template <typename T>
void Print(T arr[], const int SIZE);
template <typename T>
int FindMinElement(T arr[], const int SIZE);



int main() {
	srand(unsigned(time(NULL)));

	const int SIZE1 = 10;
	const int SIZE2 = 7;

	int arrI[SIZE1];
	double arrD[SIZE2];

	Fill(arrI, SIZE1);
	Print(arrI, SIZE1);
	int minElement = FindMinElement(arrI, SIZE1);
	cout << "Minus elements count = " << minElement << endl;
	cout << "============================================" << endl;
	Fill(arrD, SIZE2);
	Print(arrD, SIZE2);
	int minElement2 = FindMinElement(arrD, SIZE2);
	cout << "Minus elements count = " << minElement2 << endl;



	//------------------------------------------------->>>>>
	// Class work example
	/*cout << "Sum rezult = " << Sum(5, 5) << endl;
	cout << "Sum rezult = " << Sum(5.4, 5.3) << endl;*/

	/*cout << "MySum rezult = " << MySum(15.4, 5.3) << endl;
	cout << "MySum rezult = " << MySum(15, 5) << endl;
	cout << "MySum (3) rezult = " << MySum(15, 5, 100) << endl;*/
	/*cout << "MySum (double + int) rezult = " << MySum(15.3, 5) << endl;
	cout << "MySum (int + double) rezult = " << MySum(15, 5.2) << endl;*/
	//------------------------------------------------->>>>>


	system("pause");
	return 0;
}

void Fill(int arr[], const int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 20 + -12;
	}
}

void Fill(double arr[], const int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 20 - 12.4;
	}
}
template <typename T>
void Print(T arr[], const int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		cout << "arr[" << i << "] => " << arr[i] << endl;
	}
}

template <typename T>
int FindMinElement(T arr[], const int SIZE) {
	int counter = 0;
	for (int i = 0; i < SIZE; i++) {
		if (arr[i] < 0) {
			counter++;
		}
	}

	return counter;
}



//------------------------------------------------->>>>>
//// Class work example
//template <typename T>
//T MySum(T a, T b) {
//	return a + b;
//}
//
//template <typename T1, typename T2>
//T1 MySum(T1 a, T2 b) {
//	return a + b;
//}
//------------------------------------------------->>>>>




template <typename T>
T MySum(T a, T b, T c) {
	return a + b + c; 
}

int Sum(int a, int b) {
	return a + b;
}

double Sum(double a, double b) {
	return a + b;
}