#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	//1. �� ������ ���� �ڸ� ���� �߻�
	srand(time(0));
	int number1 = rand() % 10;
	int number2 = rand() % 10;
	//int number3;

	//2. if number1<number2, number1�� 2��ȯ
	/*if (number1 < number2)
		number3 = number2 - number1;
	else
		number3 = number1 - number2;*/
	if (number1 < number2) {
		int temp = number1;
		number1 = number2;
		number2 = temp;
	}

	//3, ����
	cout << "What is" << number1 << "-" << number2 << "?" << endl;
	int answer;
	cin >> answer;
	//4. ���� �´��� ��
	/*if (number3 == answer)
		cout << "You are correct!";
	else
		cout << "your answer is wrong." << endl << number1 << "-" << number2 << "should be" << number3 << endl;*/
	if (number1-number2 == answer)
		cout << "You are correct!";
	else
		cout << "your answer is wrong." << endl << number1 << "-" << number2 << "should be" << (number1-number2) << endl;

	return 0;
}