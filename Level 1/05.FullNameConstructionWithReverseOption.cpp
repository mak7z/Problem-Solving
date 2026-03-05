#include <iostream>
#include <string>
using namespace std;

struct stFullName {
	string FirstName;
	string LastName;

};


stFullName ReadFUllName()
{
	stFullName FullName;
    

	cout << "Enter first name : ";
	cin >> FullName.FirstName;

	cout << "Enter last name : ";
	cin >> FullName.LastName;

	return FullName;
}

string GetFullName(stFullName FullName, bool Reversed)
{
	if (Reversed)
	{
		return FullName.LastName + " " + FullName.FirstName;
	}

	return FullName.FirstName + " " + FullName.LastName;
}

void PrintFullName(string FullName)
{
	cout << "My name is : " << FullName << endl;
}


int main()
{
	PrintFullName(GetFullName(ReadFUllName(), true));
}

