#include <iostream>
#include <string>
using namespace std;

enum enNumberType {
    Odd = 0,Even = 1
};

int ReadNumber()
{
    int Number;

    cout << "Enter the number you want to verify : ";
    cin >> Number;

    return Number;
}


enNumberType CheckNumberType(int Number)
{
    if (Number % 2 == 0)
    {
        return enNumberType::Even;
    }

    return enNumberType::Odd;
}


void PrintNumberType(int Number)
{
    if (CheckNumberType(Number) == enNumberType::Even)
    {
        cout << "The number is Even";
    }
    else
    {
        cout << "The Number is Odd";
    }
}

int main()
{
    PrintNumberType(ReadNumber());
}


