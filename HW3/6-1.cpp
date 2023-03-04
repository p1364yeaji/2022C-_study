#include <iostream>
using namespace std;

int getPentagonalNumber(int n)
{
	int num = n * (3*n - 1) / 2;
	return num;
}

int main()
{
	for (int i = 0; i < 100;)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << getPentagonalNumber(i) << "\t";
			i++;
		}
		cout << endl;
	}
	return 0;
}