#include <iostream>
using namespace std;

short ReadAge()
{
    short Age;
    cout << "Enter your age : ";
    cin >> Age;

    return Age;
}

bool ValidateNumberInRange(short Age , short From , short To)
{
    return (Age >= From && Age <= To);
}

void PrintResult(short Age)
{
    if (ValidateNumberInRange(Age , 18 , 25))
    {
        cout << "Is valid Age";
    }
    else
        cout << "Is invalid age";
}


int main()
{
    PrintResult(ReadAge());
    return 0;
}