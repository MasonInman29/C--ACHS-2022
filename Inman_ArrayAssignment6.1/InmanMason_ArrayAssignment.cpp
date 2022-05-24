//Mason Inman
//C++ Spring 2022
//Array Assignment
//
//I did not cheat. This is my own work.

// declare necessary variables
// declare array
// Function prototypes
//void getNumbers(double[])
//findMax()
//findMin()
//find() - should return the index of the element or a - 1 indicating not found
#include<iostream>
#include<array> // for array, at()

using namespace std;
void getNumbers(double[]);

int main() {
	const int SIZE = 5;
	double numbers[SIZE] = { 0, 1, 2, 3, 4 };
	getNumbers(numbers);
	return 0;
}
	// call getNumbers()with appropriate parameters passed   
	// print results of getNumbers()
	// call and print results of findMax()
	// call and print results of findMin()
	// call and print results of find() when element is found
	// call and print results of find() when element is not found

void getNumbers(double[] arr) {
	cout << "Numbers: ";
	for (int i = 0; i < arr.size(); i++) {
		cout << arr.at(i) << " ";
	}
	cout << endl;
}