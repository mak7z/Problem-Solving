#include <iostream>
#include <string>
using namespace std;

struct stInfo {
	short Age;
	bool HasDrivingLicense;
	bool HasRecommendation;
};


stInfo ReadInfo() {
	stInfo Info;

	cout << "Enter Your Age : ";
	cin >> Info.Age;

	cout << "Do you has driver License? [0]No , [1]Yes\n";
	cin >> Info.HasDrivingLicense;

	cout << "Do you have Recommendation? [0]No , [1]Yes\n";
	cin >> Info.HasRecommendation;

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


bool CheckHasRecommendation(bool Recommendation)
{
	return Recommendation == true;
}

void PrintResult(stInfo Info)
{
	cout << "-------------------------\n";

	if (CheckHasRecommendation(Info.HasRecommendation))
	{
		cout << "\nHired \n";
		return;
	}
	else {
		if (TheCheckAgeIfWasGreaterThan21(Info) && CheckDrivingLicense(Info))
		{
			cout << "\nHired \n";
		}
		else
		{
			cout << "\nRejected \n";
		}
	}
}

int main()
{
	PrintResult(ReadInfo());
}

