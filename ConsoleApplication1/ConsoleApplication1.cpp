
#include <iostream>
using namespace std;
//-------------------------------------------------------------------------
// 1.Найти максимальное значение внутри массива
/*
int main()
{
	int n = 5;
	int* arr = new int[n];

	cout << "Type 5 numbers: ";

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int max = arr[0];

	for (int i = 0; i < n; i++) {
		if (arr[i] > max)
			max = arr[i];
	}
		cout << "Max of array: " << max <<endl;

		delete[] arr;
		return 0;
}*/
//-------------------------------------------------------------------------
// 2. Подсчитать количество четных и нечетных чисел в массиве
/*
int main() {
	int n = 5;
	int* arr = new int[n];

	cout << " Type 5 numbers: ";

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int odd = 0;
	int even = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			even++;
		}
		else {
			odd++;
		}
	}

	cout << "Even: " << even << endl;
	cout << "Odd: " << odd << endl;

	delete[] arr;

	return 0;
}*/
//-------------------------------------------------------------------------
// 3. Найти среднее арифметическое всех положительных чисел в массиве
/*int main() {
	int n;
	cout << "Type size of array: ";
	cin >> n;

	int* arr = new int[n];

	cout << "Elements of array: ";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int sum = 0;
	int count = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] > 0) {
			sum += arr[i];
			count++;
		}
	}

	if (count > 0) {
		cout << "Arifmethical mean of array: " << (sum / count) << endl;
	}
	else {
		cout << "Doesnt have positive numbers: " << endl;
	}

	delete[] arr;

	return 0;
}
*/
//-------------------------------------------------------------------------