#include <iostream>
using namespace std;

void numOccurs(const int list[], int);

int main()
{
	int numList[100];
	int num = -1, i = 0;

	for (int n = 0; n < 100; n++)
		numList[n] = 0;

	cout << "Enter the integers between 1 and 100: ";
	for (i = 0; i < 100; i++){
		cin >> num;
		if (num == 0)
			break;
		numList[i] = num;
	}
	for (int i = 1; i <= 100; i++)
		numOccurs(numList, i);

	return 0;
}

void numOccurs(const int list[], int key) {
	int count = 0;
	for (int i = 0; i < 100; i++){
		if (list[i] == key)
			count += 1;
	}
	if (count == 1)
		cout << key << " occurs " << count << " time" << endl;
	else if (count > 1)
		cout << key << " occurs " << count << " times" << endl;
}