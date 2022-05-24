// Mason Inman
// C++ Spring 2022
// 2/1/2022
// Boolean Investigation (2.1)
// This program is designed to test the output of boolean values

// I attest this project is entirely my work. 
// I did not copy from another person or source. 
// I did not share my work with anyone else.

#include <iostream>
using namespace std;

int main() {
	 bool anotherNumber;
	 cout << "Do you want to enter another number?" << endl;
	 cin >> anotherNumber; // Must  must enter true or false? 
	 if (anotherNumber)
		 cout << "True: " << anotherNumber << "!\n";
	 else
		 cout << "False: " << anotherNumber << "!\n";
	 return 0;
}