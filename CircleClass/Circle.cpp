
#include <iostream>
#include <math.h>
using namespace std;

//function prototypes
//class prototype
class Circle {
private:
	double radius;
public:
	Circle();
	Circle(double);
	void setRadius(double);
	double getRadius();
	double findArea();
};


int main() {
	Circle circle1();
	Circle circle2(10);

	cout << "Circle1 with radius "<< circle1 << endl;
	//cout << "Circle2 with radius " << circle2 << endl;

	//cout << "Cirlce with radius " << circle1.getRadius() << endl;

	return 0;
}


//class implementation
Circle::Circle() {
	radius = 1;
}
Circle::Circle(double r) {
	radius = r;
}
void Circle::setRadius(double num) {
	radius = num;
}
double Circle::getRadius() {
	return radius;
}
double Circle::findArea() {
	return 3.14 * pow(radius, 2);
}