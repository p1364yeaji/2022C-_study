#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream output;
	output.open("number.txt");
	output << 95 << " " << 56 << " " << 34 << " number";
	output.close();
	cout << "Done" << endl;

	return 0;
}