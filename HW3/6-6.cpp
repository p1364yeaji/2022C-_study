#include <iostream>
using namespace std;

void displayPattern(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < n - i; j++)
			cout << " ";
		for (int k = i; k > 0; k--)
			cout << k;
		cout << endl;
	}
}

int main()
{
	cout << "Enter the number of pattern lines: ";
	int num;
	cin >> num;
	displayPattern(num);

	return 0;
}