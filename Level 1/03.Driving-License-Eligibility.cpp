#include <iostream>
#include <string>
using namespace std;

struct stInfo {
	short Age;
	bool HasDrivingLicense;

};


stInfo ReadInfo() {
	stInfo Info;

	cout << "Enter Your Age : ";
	cin >> Info.Age;

	cout << "Do you has driver License? [0]No , 1[Yes]\n";
	cin >> Info.HasDrivingLicense;

	return Info;
}


bool TheCheckAgeIfWasGreaterThan21(stInfo Info)
{
	return (Info.Age > 21);
}

bool CheckDrivingLicense(stInfo Info)
{
	return (Info.HasDrivingLicense == true);
}

void PrintResult(stInfo Info)
{
	cout << "-------------------------\n";
	if (TheCheckAgeIfWasGreaterThan21(Info) && CheckDrivingLicense(Info))
	{
		cout << "\nHired \n";
	}
	else
	{
		cout << "\nRejected \n";
	}
}

int main()
{
	PrintResult(ReadInfo());
}


