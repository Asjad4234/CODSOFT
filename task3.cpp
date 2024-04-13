#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool Win(char arr[3][3], char symbol)
{
    for (int i = 0; i < 3; ++i)
    {
        // Checks in rows and cols
        if (arr[i][0] == symbol && arr[i][1] == symbol && arr[i][2] == symbol)
            return true;
        if (arr[0][i] == symbol && arr[1][i] == symbol && arr[2][i] == symbol)
            return true;
    }
    // Checks diagonals (right and left)
    if (arr[0][0] == symbol && arr[1][1] == symbol && arr[2][2] == symbol)
        return true;
    if (arr[0][2] == symbol && arr[1][1] == symbol && arr[2][0] == symbol)
        return true;
    return false;
}

bool Draw(char arr[3][3])
{
    // If all spaces are filled we return true as game is drawed
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == ' ')
                return false;
        }
    }
    return true;
}

int main()
{
    char player = 'O';
    // FLAGS
    bool win = false;
    bool draw = false;
    char arr[3][3];
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            arr[i][j] = ' ';
        }
    }
    cout << "Welcome to Tic-Tac-Toe!" << endl;
    while (!win && !draw)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "| ";
            for (int j = 0; j < 3; j++)
            {
                cout << arr[i][j] << " | ";
            }
            cout << endl;
        }

        int row, col;
        cout << "Player " << player << " TURN (Enter row and column 1-3 only) ";
        cin >> row >> col;

        if (row >= 1 && row <= 3 && col >= 1 && col <= 3 && arr[row - 1][col - 1] == ' ')
        {
            arr[row - 1][col - 1] = player;
        }
        else
        {
            cout << "Invalid input! Please Try again (Enter row and column 1-3 only) " << endl;
            continue;
        }
        if (Win(arr, player))
        {
            win = true;
            cout << "Congrats !!! Player " << player << " is the Winner!" << endl;
            break;
        }
        else if (Draw(arr))
        {
            draw = true;
            cout << "Match drawed!" << endl;
            break;
        }

        player = (player == 'O') ? 'X' : 'O';
    }
    // Printing Board
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " | ";
        }
        cout << endl;
    }
    return 0;
}
