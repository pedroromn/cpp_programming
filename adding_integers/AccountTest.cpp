#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

// pag 115 - Deitel C++ Global Edition

int main()
{
	Account myAccount;

	cout << "Initial account is: " << myAccount.getName();
	cout << "\nPlease enter the account name: ";
	string theName;
	getline(cin, theName);
	myAccount.setName(theName);

	cout << "\nName in object myAccount is: "
		<< myAccount.getName() << endl;

	return 0;
}