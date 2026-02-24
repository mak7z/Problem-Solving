#include <iostream>
#include <string>
using namespace std;

string ReadName()
{
    string name;

    cout << "Enter Your Name : ";
    getline(cin, name);

    return name;
}

void PrintYourName(string name)
{
    cout << "Your name is : " << name << endl;
}

int main()
{
    PrintYourName(ReadName());
}


