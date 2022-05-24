//Mason Inman
//C++ Spring 2022
//Array Assignment 6.1
//
//Array Assignment-working with arrays
//I did not cheat. This is my own work.

#include<iostream>
#include<array>

using namespace std;

void print(double[], int);
void getNumbers(double[], int);
double findMax(double[], int);
double findMin(double[], int);
double find(double, double[], int);

int main() {
	const int SIZE = 5;
	double numbers[SIZE];

	getNumbers(numbers, SIZE);
	print(numbers, SIZE);
	cout << "Max: " << findMax(numbers, SIZE) << endl;
	cout << "Min: " << findMin(numbers, SIZE) << endl;
	
	double num = -1;
	cout << "Enter a number to find" << endl;
	cin >> num;

	if (find(num, numbers, SIZE) == -1) {
		cout << num << " was not found in the list." << endl;
	}
	else {
		cout << num << " was found at index " << find(num, numbers, SIZE) << " of the list." << endl;
	}


	return 0;
}

//prints out an array in [x, x, x] format
void print(double arr[], int size) {
	cout << "[";
	for (int i = 0; i < size; i++) {
		if (i != size - 1) {
			cout << arr[i] << ", ";
		}
		else {
			cout << arr[i] << "]" << endl;
		}
	}
}
//cout << "Numbers: ";
void getNumbers(double arr[], int size) {
	double element = 0;
	for (int i = 0; i < size; i++) {
		cout << "Enter a number: ";
		cin >> element;
		arr[i] = element;
	}
}

//returns largest element of the list
double findMax(double arr[], int size) {
	double max = arr[0];
	for (int i = 1; i < size; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	return max;
}

//returns lowest element in a list
double findMin(double arr[], int size) {
	double min = arr[0];
	for (int i = 1; i < size; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	return min;
}

//returns the index of a element in a list or -1 if not found
double find(double numToFind, double arr[], int size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == numToFind) {
			return i;
		}
	}
	return -1;
}

//Screenshots of code running:
//https://docs.google.com/document/d/1yKfVA4YN21nsHq1q4j2t9g0mwZWBpNIbL8zrq3jqRY8/edit?usp=sharing