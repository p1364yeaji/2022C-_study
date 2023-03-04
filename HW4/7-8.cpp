#include <iostream>
using namespace std;

void numberList(int array[]);
void numberList(double array[]);
int average(const int array[], int size);
double average(const double array[], int size);

double r = 0;
string type;

int main()
{
	cout << "Choose a data type(int/double): ";
	cin >> type;
	if (type == "int") {
		int numList[10];
		cout << "Enter ten numbers: ";
		numberList(numList);
	}
	else if (type == "double") {
		double numList[10];
		cout << "Enter ten numbers: ";
		numberList(numList);
	}

	return 0;
}

void numberList(int array[]) {
	for (int i = 0; i < 10; i++)
		cin >> array[i];

	cout << "The average is " << average(array, 10) << endl;
}

void numberList(double array[]) {
	for (int i = 0; i < 10; i++) {
		cin >> r;
		array[i] = static_cast<double>(r);
	}

	cout << "The average is " << average(array, 10) << endl;
}

int average(const int array[], int size) {
	int sum = 0, ave = 0;
	for (int i = 0; i < size; i++)
		sum += array[i];
	ave = sum / size;

	return ave;
}

double average(const double array[], int size) {
	double sum = 0.0, ave = 0.0;
	for (int i = 0; i < size; i++)
		sum += array[i];
	ave = sum / size;

	return ave;
}