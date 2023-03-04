#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n = 1;

	while (pow(2,n)< 30000){
		n += 1;
	}
	cout << "The largest integer n such that 2©úis less than 30,000: " << n << endl;

	return 0;
}