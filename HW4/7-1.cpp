#include <iostream>
using namespace std;

void studentsScore(const int[], int, int);

int main()
{
	int num, best = 0;
	int score[100];
	cout << "Enter the number of students: ";
	cin >>  num;
	cout << "Enter " << num << " scores: ";

	for (int i = 0; i < num; i++){
		cin >> score[i];
		if (score[i] > best)
			best = score[i];
	}
	studentsScore(score, num, best);

	return 0;
}

void studentsScore(const int list[], int number, int bestScore)
{
	for (int i = 0; i < number; i++){
		if (bestScore - list[i] <= 10)
			cout << "student " << i << " score is " << list[i] << " and grade is A" << endl;
		else if (bestScore - list[i] <= 20)
			cout << "student " << i << " score is " << list[i] << " and grade is B" << endl;
		else if (bestScore - list[i] <= 30)
			cout << "student " << i << " score is " << list[i] << " and grade is C" << endl;
		else if (bestScore - list[i] <= 40)
			cout << "student " << i << " score is " << list[i] << " and grade is D" << endl;
		else
			cout << "student " << i << " score is " << list[i] << " and grade is F" << endl;
	}
}
