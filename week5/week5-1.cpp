#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x1, y1, x2, y2, x3, y3;
	cout << "Enter three points: ";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	double a = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
	double b = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	double c = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

	double A = acos((a * a - b * b - c * c) / (-2 * b * c));
	double B = acos((b * b - a * a - c * c) / (-2 * a * c));
	double C = acos((c * c - b * b - a * a) / (-2 * a * b));

	const double PI = 3.14159;
	cout << "The three angles are " << A * 180 / PI << " " << B * 180 / PI << " " << C * 180 / PI << endl;

	return 0;

}