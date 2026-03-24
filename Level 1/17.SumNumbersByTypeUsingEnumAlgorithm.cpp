#include <iostream>
using namespace std;

enum enTypeNumber
{
    Odd = 1,
    Even = 2,
    All = 3
};

int ReadNumber()
{
    int Number;
    cout << "Enter the number: ";
    cin >> Number;
    return Number;
}

enTypeNumber ReadType()
{
    int Choice;
    cout << "Choose type: [1] Odd , [2] Even , [3] All : ";
    cin >> Choice;

    while (Choice < 1 || Choice > 3)
    {
        cout << "Invalid choice, try again: ";
        cin >> Choice;
    }

    return (enTypeNumber)Choice;
}

enTypeNumber CheckNumberType(int Number)
{
    return (Number % 2 == 0) ? enTypeNumber::Even : enTypeNumber::Odd;
}

int CalculateSum(int Number, enTypeNumber Type)
{
    int Sum = 0;

    for (int i = 1; i <= Number; i++)
    {
        if (CheckNumberType(i) == Type)
        {
            Sum += i;
        }
    }

    return Sum;
}

void CalculateAll(int Number)
{
    int SumEven = CalculateSum(Number, enTypeNumber::Even);
    int SumOdd = CalculateSum(Number, enTypeNumber::Odd);

    cout << "The Odd  sum is : " << SumOdd << endl;
    cout << "The Even sum is : " << SumEven << endl;
}

int main()
{
    int Number = ReadNumber();
    enTypeNumber Type = ReadType();

    if (Type == enTypeNumber::All)
    {
        CalculateAll(Number);
    }
    else
    {
        cout << "The sum is: " << CalculateSum(Number, Type) << endl;
    }

    return 0;
}