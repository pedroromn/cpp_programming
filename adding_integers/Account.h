#pragma once
#include <string>
using namespace std;

class Account
{
public:
	// member function that sets the account name in the object
	void setName(string accountName)
	{
		name = accountName;
	}

	string getName() const
	{
		return name;
	}

private:
	string name;

};