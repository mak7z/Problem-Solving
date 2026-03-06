#include <iostream>
using namespace std;

enum enPassFail {
	Pass = 0, Fall = 1
};

short ReadGrade()
{
	short Grade;

	while (true)
	{
		cout << "Enter your grade : ";
		cin >> Grade;

		if (Grade >= 0)
		{
			break;
		}
	}

	return Grade;

}

enPassFail PassFail(short Grade)
{

	if (Grade >= 50)
	{
		return enPassFail::Fall;
	}

	return enPassFail::Pass;
}


void PrintGrade(short Grade)
{
	if (PassFail(Grade) == enPassFail::Fall)
	{
		cout << "You Filled\n";
	}
	else
	{
		cout << "You Passed\n";
	}

}

int main()
{
	PrintGrade(ReadGrade());
}

