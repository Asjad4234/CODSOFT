#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Randomly Generating number
    srand(time(NULL));
    int num = rand() % 10;
    cout << "Generated Number is " << num << endl;
    int tries = 0;
    int guess;
    while (true)
    {
        cout << "Enter your guess Number (0-9) ";
        cin >> guess;
        if (guess < 0 || guess > 9)
        {
            cout << "Invalid Input ! Please Enter in range (0-9) " << endl;
            continue;
        }
        if (guess < num)
        {
            tries++;
            cout << "Guess is smaller than number try again !!!" << endl;
        }
        else if (guess > num)
        {
            tries++;
            cout << "Guess is bigger than number try again !!!" << endl;
        }
        else
        {
            tries++;
            cout << "Congrats!!! You have Guessed the Number " << num << " Correctly." << endl;
            cout << "Tries Taken : " << tries << endl;
            break;
        }
    }
}
