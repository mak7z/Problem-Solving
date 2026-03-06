#include <iostream>
#include <string>
using namespace std;

float ReadNumber()
{
	float Number;

	cout << "Enter the Number : ";
	cin >> Number;

	return Number;
}


float HalfNumber(float num)
{
	return num / 2;
}


void PrintHalfOfTheNumber(float num)
{

	string Result = "The half number " + to_string(num) + " is " + to_string(HalfNumber(num));

	cout << Result;
}


int main()
{
	PrintHalfOfTheNumber(ReadNumber());
}

