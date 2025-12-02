#include <iostream>
using namespace std;
char details[4][4] = {{'O', 'O', 'O', 'O'},
                      {'O', 'O', 'O', 'O'},
                      {'O', 'O', 'O', 'O'},
                      {'O', 'O', 'O', 'O'}};
int main()
{
    bool execute = true;
    string seats[4][4] = {{"1-1 ", "1-2 ", "1-3 ", "1-4 "},
                          {"2-1 ", "2-2 ", "2-3 ", "2-4 "},
                          {"3-1 ", "3-2 ", "3-3 ", "3-4 "},
                          {"4-1 ", "4-2 ", "4-3 ", "4-4 "}};
    while (execute)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << seats[i][j] << details[i][j] << ",  ";
            }
            cout << endl;
        }
        int row, col;
        cout << "Enter Seat No. to reserve(Row_No.Column_No.): ";
        cin >> row;
        cin >> col;
        if (row + col < 9 && row + col > 1)
        {
            if (details[row - 1][col - 1] == 'R')
            {
                cout << "The seat is reserved before. Please choose another seat!\n";
            }
            else
            {
                details[row - 1][col - 1] = 'R';
                cout << "Congrats! Your seat is reserved.\n";
            }
        }
        else
        {
            cout << "\nThe seat No. is Invalid. No such seat is available in our cinema.....";
        }

        cout << "\nWant to book more seat(Press):" << endl
             << "1 for YES \n0 for NO: ";
        cin >> execute;
    }
    return 0;
}