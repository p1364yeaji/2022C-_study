#include <iostream>
using namespace std;

int main()
{
	double sum = 0, currentValue = 0.01;

	for (int count = 0; count < 100; count++) {
		sum += currentValue;
		currentValue += 0.01;
	}

	cout << "The sum is " << sum << endl;

	return 0;
}