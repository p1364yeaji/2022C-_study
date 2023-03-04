#include <iostream>
using namespace std;

void reverse(int number)
{
	while (number != 0)
	{
		int remainder = number % 10;
		cout << remainder;
		number = number / 10;
	}
}

int main()
{
	cout << "Enter a integer: ";
	int num;
	cin >> num;
	reverse(num);

	return 0;
}