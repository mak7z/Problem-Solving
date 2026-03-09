#include <iostream>
using namespace std;

void ReadNumbers(double& Num1, double& Num2, double& Num3)
{
	cout << "Enter the first number : ";
	cin >> Num1;

	cout << "Enter the second number : ";
	cin >> Num2;

	cout << "Enter the third number : ";
	cin >> Num3;
}

double CalculateNumbers(double Num1, double Num2, double Num3)
{
	return Num1 + Num2 + Num3;
}

void PrintTotal(double Total)
{
	cout << "The total = " << Total;
}

int main()
{
	double Num1, Num2, Num3;

	ReadNumbers(Num1, Num2, Num3);

	double Total = CalculateNumbers(Num1, Num2, Num3);
	PrintTotal(Total);

}

