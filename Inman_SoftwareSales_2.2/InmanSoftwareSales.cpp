// Mason Inman
// C++ Spring 2022
// 2/2/2022
// Software Sales 2.2 C++
// This program displays the price based on quantity of a $99 item
// It price is at an increased discount with quantity

// I attest this project is entirely my work. 
// I did not copy from another person or source. 
// I did not share my work with anyone else.

//LINK TO DATA TABLE https://docs.google.com/document/d/1bd50eAr41KKG1ljS3G75cpgZ0rxq1juS3q4y7ZT-R_8/edit?usp=sharing
#include <iostream>

using namespace std;

int main()
{
	const double PRICE_PER_ITEM = 99;
	int quantity = 0;
	double price = 0;
	int discount = 0;


	cout << "How many items do you wish to purchase?" << endl;
	cin >> quantity;

	//price w/o discount
	price = quantity * PRICE_PER_ITEM;

	//apply discounts
	if (quantity <= 0) {
		price = 0; //0 or invalid input
	}
	else if (quantity < 10) {
		price = price;
	}
	else if (quantity < 20 && quantity > 9) {
		price *= .8; //20% discount for 10-19 items
		discount = 20;
	}
	else if (quantity < 50) {
		price *= .7; //30% discount for 20-49 items
		discount = 30;
	}
	else if (quantity < 100) {
		price *= .6; //40% discount for 50-99 items
		discount = 40;
	}
	else if (quantity > 99) {
		price *= .5; //50% discount for 100+ items
		discount = 50;
	}
	//else no discount

	cout << quantity << " items at $" << PRICE_PER_ITEM << " will cost $" << price << " with a " << discount << "% discount." << endl;
	return 0;
}