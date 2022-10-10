// CalculatorTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
    cout << "Console Calender Application" << endl << endl;
    cout << "Please enter a correctly formatted expression." << endl;
    cout << "Permitted operations are +, -, *, /, ^, sin, cos, tan, cot, ln, log10:\n" << endl;

    Calculator c;
    string result;
    while (true)
    {
        string input;
        cin >> input;
        if (IsValid(s)) {
            cout << "Expection - Division by 0" << endl;
            continue;
        }
        else {
            result = c.Calculate(input);
        }
        cout << "Result is: " << result << endl;
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
