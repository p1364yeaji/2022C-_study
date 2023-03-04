#include <iostream>
using namespace std;

int max(int num1, int num2)
{
	int result;

	if (num1 > num2)
		result = num1;
	else
		result = num2;

	return result;
}

int main()
{
	int i = 5, j = 2, k = max(i, j);
	cout << "the maximunm between " << i << " and " << j << " is " << k << endl;

	return 0;
}