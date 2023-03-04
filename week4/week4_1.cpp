#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	//1. rand()ÇÔ¼ö
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	// 
	srand(100);
	cout << rand() << endl;
	srand(100);
	cout << rand() << endl;
	srand(100);
	cout << rand() << endl;
	//
	srand(10);
	cout << rand() << endl;
	srand(20);
	cout << rand() << endl;
	srand(30);
	cout << rand() << endl;

	return 0;
}