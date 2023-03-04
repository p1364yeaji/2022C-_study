// week2_1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{
	double radius;
	cout << "Enter a radius: ";
	cin >> radius;

	if (radius < 0) {
		cout << "Incorrect input" << endl;
	}
	else {
	double area = radius * radius * 3.14159;
	cout << "The area is " << area << endl;
	}

	return 0;
}

