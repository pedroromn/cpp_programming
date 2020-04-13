#include <iostream>
#include <cmath>
#include <cctype>
#include <iomanip>

using namespace std;

int main()
{
	int num;
	double firstNum, secondNum;
	char ch = 'T';

	cout << fixed << showpoint << setprecision(2)
		<< endl;

	cout << "Line 12: Is " << ch
		<< " a lowercase letter? "
		<< islower(ch) << endl;
	return 0;
}