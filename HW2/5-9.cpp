#include <iostream>
using namespace std;

int main()
{
	double rent = 1000; double sum = 0;

	cout << "This year rent: $" << rent << "\n";
	for (int year = 1; year < 6; year++) {
		sum += rent;
		rent += rent * 0.03;
		if (year == 1)
			cout << "Rent after " << year << " year: $" << rent << "\n";
		else
			cout << "Rent after " << year << " years: $" << rent << "\n";
	}
	cout << "Total rent: $" << sum << endl;
	return 0;
}