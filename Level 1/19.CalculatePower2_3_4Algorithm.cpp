#include <iostream>
using namespace std;


int ReadNumber()
{
    int Number;
    cout << "Enter the number: ";
    cin >> Number;
    return Number;
}


void Power2_3_4(int Number)
{
    int Power2, Power3, Power4;

    Power2 = Number * Number;
    Power3 = Number * Number * Number;
    Power4 = Number * Number * Number * Number;

    cout << "The power 2 = " << Power2 << "\nThe Power 3 = " << Power3 << "\nThe Power 4 = " << Power4 << endl;
}

int main()
{
    Power2_3_4(ReadNumber());

    return 0;
}