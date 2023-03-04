#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a letter: ";
	char Letter, letter;
	cin >> Letter;
	letter = tolower(Letter);

	if (letter == 'a' || letter == 'b' || letter == 'c')
		cout << "The corresponding number is 2" << endl;
	else if ((letter == 'd' || letter == 'e' || letter == 'f'))
		cout << "The corresponding number is 3" << endl;
	else if ((letter == 'g' || letter == 'h' || letter == 'i'))
		cout << "The corresponding number is 4" << endl;
	else if ((letter == 'j' || letter == 'k' || letter == 'l'))
		cout << "The corresponding number is 5" << endl;
	else if ((letter == 'm' || letter == 'n' || letter == 'o'))
		cout << "The corresponding number is 6" << endl;
	else if ((letter == 'p' || letter == 'q' || letter == 'r' || letter == 's'))
		cout << "The corresponding number is 7" << endl;
	else if ((letter == 't' || letter == 'u' || letter == 'v'))
		cout << "The corresponding number is 8" << endl;
	else if ((letter == 'v' || letter == 'w' || letter == 'x' || letter == 'z'))
		cout << "The corresponding number is 9" << endl;
	else
		cout << letter << " is an invalid input" << endl;

	return 0;
}