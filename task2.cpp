#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Simple Calculator
    float num1, num2;
    cout << "Enter the values of num1 and num2 respectively: ";
    cin >> num1 >> num2;

    int option;
    while (true)
    {
        cout << "Enter Option to Perform Arithmetic Operations: " << endl
             << endl;
        cout << "0. Addition" << endl;
        cout << "1. Subtraction" << endl;
        cout << "2. Multiplication" << endl;
        cout << "3. Division" << endl;
        cout << "4. Exit" << endl
             << endl;
        cin >> option;

        switch (option)
        {
        case 0:
            cout << "Result of Addition is " << num1 + num2 << endl;
            break;
        case 1:
            cout << "Result of Subtraction is " << num1 - num2 << endl;
            break;
        case 2:
            cout << "Result of Multiplication is " << num1 * num2 << endl;
            break;
        case 3:
            if (num2 != 0)
                cout << "Result of Division is " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero." << endl;
            break;
        case 4:
            cout << "Exiting!!!" << endl;
            return 0;
        default:
            cout << "Invalid Input. Please select only (0-4)" << endl;
        }
    }
    return 0;
}
