#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream input;
	input.open("number.txt");
	int score1, score2, score3;
	input >> score1 >> score2 >> score3;
	cout << score1+score2+score3 << endl;
	input.close();

	return 0;
}