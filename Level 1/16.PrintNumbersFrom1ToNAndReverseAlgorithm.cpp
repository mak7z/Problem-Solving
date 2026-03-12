#include <iostream>
using namespace std;

short ReadNumber()
{
    short Number;
    cout << "Enter the number you want : ";
    cin >> Number;

    return Number;
}

void PrintResultFrom1To(short Number)
{
    cout << "==========================\n";
    cout << "From 1 to " << Number;
    cout << endl;

    for (int Count = 1; Count <= Number; Count++)
    {
        cout << Count;
        if (!(Count == Number))
        {
            cout << " , ";
        }
    }
}

void PrintResultFromNumberTo1(short Number)
{
    cout << "==========================\n";
    cout << "From " << Number << " To 1";
    cout << endl;

    for (int Count = Number; Count >= 1; Count--)
    {
        cout << Count;
        if (!(Count == 1))
        {
            cout << " , ";
        }
    }
}
int main()
{
    int Number = ReadNumber();
    PrintResultFrom1To(Number);
    cout << endl;
    PrintResultFromNumberTo1(Number);
    return 0;
}