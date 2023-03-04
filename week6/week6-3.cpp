#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	srand(time(0));
	int number1 = rand() % 10;
	int number2 = rand() % 10;

	if (number1 < number2)
	{
		int temp = number1;
		number1 = number2;
		number2 = temp;
	}
	cout << "What is " << number1 << " - " << number2 << " ?\n";
	int answer;
	cin >> answer;

	while (number1 - number2 != answer)
	{
		cout << "Wrong answer. Try again.";
		cin >> answer;
	}
	cout << "YOu got it!" << endl;

	return 0;
}