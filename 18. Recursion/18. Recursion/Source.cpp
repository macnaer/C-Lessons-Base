#include <iostream>
#include <ctime>

using namespace std;

int Recurs(int counter);
int Sum(int start, int end, int sum);
void FillArr(int arr[], const int SIZE);
void Print(int arr[], const int SIZE);
int MaxElement(int arr[], const int SIZE, int max, int i);



int main() {
	srand(unsigned(time(NULL)));

	const int SIZE = 6;
	char arr[SIZE];

	cout << "Enter string" << endl;
	cin >> arr;
	

	for (int i = 0; i < SIZE ; i++) {
		cout << arr[i] << endl;
	}
		
	/*const int SIZE = 10;
	int arr[SIZE];
	int max = 0;
	int i = 0;

	FillArr(arr, SIZE);
	Print(arr, SIZE);
	cout << "Max element = " << MaxElement(arr, SIZE, max, i) << endl;;*/


	/*int start = 0, end = 0, sum = 0;

	cout << "Enter start and end digits => " << endl;
	cin >> start >> end;
	
	sum = Sum(start, end, sum);
	cout << "Sum ===>>> " << sum << endl;*/

	//Recurs(10);

	system("pause");
	return 0;
}

int Sum(int start, int end, int sum) {
	sum += start;
	start++;

	if (start == end) {
		return sum;
	}

	Sum(start, end, sum);
}

void FillArr(int arr[], const int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 10 + 1;
	}
}

void Print(int arr[], const int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}

int Recurs(int counter) {
	counter--;

	if (counter == 0) {
		return 0;
	}

	cout << "Counter = " << counter << endl;

	Recurs(counter);
}

int MaxElement(int arr[], const int SIZE, int max, int i) {
	//int text = 0;  Don't do it!!! )))
	//cout << "Text address " << &text << endl;  Proof
	if (max < arr[i]) {
		max = arr[i];
	}
	if (SIZE == i) {
		return max;
	}
	i++;

	MaxElement(arr, SIZE, max, i);

}