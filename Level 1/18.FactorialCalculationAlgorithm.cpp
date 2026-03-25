#include <iostream>
using namespace std;

int ReadPOsitiveNumber(string Message)
{
    int Number;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

int Factorial(int Number)
{
    int Fact = 1;

    for (int i = Number; i > 0; i--)
    {
        Fact *= i;
    }

    return Fact;
}


int main()
{
    
    cout << Factorial(ReadPOsitiveNumber("Pleas enter a Positive Number? ")) << endl;

    return 0;
}