#include <iostream>
#include <cmath>
using namespace std;

void displayPy(int);

int main()
{
	cout << "i \t\t m(i)" << endl;
	cout << fixed;
	cout.precision(4);
	displayPy(10);

	return 0;
}

void displayPy(int num)
{
	for (int i = 1; i <= num; i++)
	{
		int j = 1 + 100 * (i - 1);
		double sum = 0;
		for (int n = 1; n <= j; n++) {
			sum += pow(-1, n + 1) / (2 * n - 1);
		}
		double py = 4 * sum;
		cout << j << "\t\t" << py << endl;
	}
}