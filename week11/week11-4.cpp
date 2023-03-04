#include <iostream>
using namespace std;

void increment(int& n)
{
	n++;
	cout << "n inside the fungtion is " << n << endl;
}

int main()
{
	int x = 1;
	cout << "Before the call, x is " << x << endl;
	increment(x);
	cout << x << endl;

	return 0;
}