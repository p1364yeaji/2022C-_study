#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	srand(time(0));
	int lottery = rand() % 100; //���ڸ��� �߻�
	int number;

	cout << "���ڸ����� �Է��ϼ���: " << endl;
	cin >> number;

	if (lottery == number)
		cout << "" << endl;

	return 0;
}