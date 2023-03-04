#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "Enter the side: ";
	double side, area;
	const double PI = 3.14159;
	cin >> side;

	area = (6*side*side)/(4*tan(PI/6));

	cout << fixed;
	cout.precision(2);
	cout << "The area of the hexagon is " << area << endl;

	return 0;
}