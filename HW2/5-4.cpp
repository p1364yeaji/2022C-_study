#include <iostream>
using namespace std;

int main()
{
	cout << "Meters\t\tFeet\n";

	for (int i = 1; i<16; i++){
		cout << i;
		cout << fixed;
		cout.precision(3);
		cout << "\t\t" << i * 3.280 << "\n";
	}

	return 0;
}