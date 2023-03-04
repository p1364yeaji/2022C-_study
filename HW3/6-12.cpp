#include <iostream>
using namespace std;

double displaySeries(int);

int main()
{
	cout << "i \t\t m(i)" << endl;
	cout << fixed;
	cout.precision(4);
	for (int i = 1; i <= 20; i++){
		double Sum = displaySeries(i);
		cout << i << "\t\t" << Sum << endl;
	}
	return 0;
}

double displaySeries(int num)
{
	double sum = 0, n = 1;
	for (int count = 1; count <= num; count++){
		sum += (n / (n + 1));
		n += 1;
	}
	return sum;
}
