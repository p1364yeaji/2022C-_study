#include <iostream>
using namespace std;

int list(int list[], int, int);
void view(const int list[]);

int main()
{
	int index = 0, integer = 0, numList[10];
	for (int i = 0; i < 10; i++)
		numList[i] = 0;

	cout << "Enter ten numbers: ";
	for (int i = 0; i < 10; i++) {
		cin >> integer;
		numList[index] = list(numList, integer, index);
		index += 1;
	}
	view(numList);

	return 0;
}

int list(int list[], int key, int index) {
	if (index == 0)
		return key;

	for (int j = 0; j < index; j++) {
		if (key == list[j])
			return 0;
	}
	return key;
}

void view(const int list[]) {
	cout << "The distinct numbers are: ";
	for (int i = 0; i < 10; i++) {
		if (list[i] == 0)
			continue;
		cout << list[i] << " ";
	}
}