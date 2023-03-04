#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	srand(time(0));
	int lottery = rand() % 100; //두자릿수 발생
	int number;

	cout << "두자릿수를 입력하세요: " << endl;
	cin >> number;

	if (lottery == number)
		cout << "" << endl;

	return 0;
}