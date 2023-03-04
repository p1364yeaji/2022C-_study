#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int counts[10];
	for (int i = 0; i < 10; i++)
		counts[i] = 0;

	srand(time(0));
	for (int i = 0; i < 100; i++) {
		int number = rand() % 10;
		switch (number) {
		case 0: counts[0] += 1; continue;
		case 1: counts[1] += 1; continue;
		case 2: counts[2] += 1; continue;
		case 3: counts[3] += 1; continue;
		case 4: counts[4] += 1; continue;
		case 5: counts[5] += 1; continue;
		case 6: counts[6] += 1; continue;
		case 7: counts[7] += 1; continue;
		case 8: counts[8] += 1; continue;
		case 9: counts[9] += 1; continue;
		}
	}

	for (int i = 0; i < 10; i++)
		cout << "The total counts of number " << i << " is " << counts[i] << endl;

	return 0;
}