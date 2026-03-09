#include <iostream>
#include <cmath>
using namespace std;

enum enChoice
{
    opRectangleArea = 1,
    opRectangleByDiagonal = 2,
    opTriangleArea = 3,
    opCircleByRadius = 4,
    opCircleByDiameter = 5,
    opCircleInsideSquare = 6,
    opCircleByCircumference = 7,
    opCircleByTriangleSides = 8
};

void ShowMenu()
{
    cout << "Choose what you want to calculate:\n";
    cout << "1 Rectangle Area\n";
    cout << "2 Rectangle Area by Side and Diagonal\n";
    cout << "3 Triangle Area\n";
    cout << "4 Circle Area by Radius\n";
    cout << "5 Circle Area by Diameter\n";
    cout << "6 Circle Area inside Square\n";
    cout << "7 Circle Area by Circumference\n";
    cout << "8 Circle Area by Triangle Sides\n";
}

int ReadChoice()
{
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;
    return choice;
}

float ReadNumber(string message)
{
    float num;
    cout << message;
    cin >> num;
    return num;
}

void ReadTwoNumbers(float& A, float& B, string m1, string m2)
{
    cout << m1;
    cin >> A;

    cout << m2;
    cin >> B;
}

void ReadThreeNumbers(float& A, float& B, float& C)
{
    cout << "Enter Side A: ";
    cin >> A;

    cout << "Enter Side B: ";
    cin >> B;

    cout << "Enter Side C: ";
    cin >> C;
}

float RectangleArea(float W, float L)
{
    return W * L;
}

float RectangleAreaByDiagonal(float A, float D)
{
    return A * sqrt(pow(D, 2) - pow(A, 2));
}

float TriangleArea(float A, float H)
{
    return (A * H) / 2;
}

float CircleArea(float R)
{
    const float PI = 3.141592653589793238;
    return PI * pow(R, 2);
}

float CircleAreaByDiameter(float D)
{
    const float PI = 3.141592653589793238;
    return (PI * pow(D, 2)) / 4;
}

float CircleInsideSquare(float A)
{
    const float PI = 3.141592653589793238;
    return (PI * pow(A, 2)) / 4;
}

float CircleAreaByCircumference(float L)
{
    const float PI = 3.141592653589793238;
    return pow(L, 2) / (4 * PI);
}

float CircleAreaByTriangleSides(float A, float B, float C)
{
    const float PI = 3.141592653589793238;

    float P = (A + B + C) / 2;

    float R = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));

    return PI * pow(R, 2);
}

void PerformCalculation(enChoice Choice)
{
    float A, B, C, L;

    switch (Choice)
    {
    case opRectangleArea:
        ReadTwoNumbers(A, B, "Enter Width: ", "Enter Length: ");
        cout << "Area = " << RectangleArea(A, B) << endl;
        break;

    case opRectangleByDiagonal:
        ReadTwoNumbers(A, B, "Enter Side A: ", "Enter Diagonal D: ");
        cout << "Area = " << RectangleAreaByDiagonal(A, B) << endl;
        break;

    case opTriangleArea:
        ReadTwoNumbers(A, B, "Enter Base: ", "Enter Height: ");
        cout << "Area = " << TriangleArea(A, B) << endl;
        break;

    case opCircleByRadius:
        A = ReadNumber("Enter Radius: ");
        cout << "Area = " << CircleArea(A) << endl;
        break;

    case opCircleByDiameter:
        A = ReadNumber("Enter Diameter: ");
        cout << "Area = " << CircleAreaByDiameter(A) << endl;
        break;

    case opCircleInsideSquare:
        A = ReadNumber("Enter Square Side: ");
        cout << "Area = " << CircleInsideSquare(A) << endl;
        break;

    case opCircleByCircumference:
        L = ReadNumber("Enter Circumference: ");
        cout << "Area = " << CircleAreaByCircumference(L) << endl;
        break;

    case opCircleByTriangleSides:
        ReadThreeNumbers(A, B, C);
        cout << "Area = " << CircleAreaByTriangleSides(A, B, C) << endl;
        break;

    default:
        cout << "Invalid Choice\n";
    }
}

int main()
{
    ShowMenu();
    PerformCalculation((enChoice)ReadChoice());
    return 0;
}