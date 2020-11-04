/*
*  ****
*  *
*  *
*******
   *  *
   *  *
****  *
*/
#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int N;
    cin >> N;
    // 	ROW:1

    // PRINT *
    cout << "*";
    // PRINT SPACE
    for (int i = 1; i <= (N - 3) / 2; i++)
    {
        cout << " ";
    }
    // PRINT STAR
    for (int i = 1; i <= (N + 1) / 2; i++)
    {
        cout << "*";
    }
    cout << endl;

    // ROW: 2,3
    // PRINT STAR AND SPACE
    for (int i = 1; i <= (N - 3) / 2; i++)
    {
        cout << "*";
        for (int i = 1; i <= (N - 3) / 2; i++)
        {
            cout << " ";
        }
        cout << "*";
        cout << endl;
    }

    // ROW:4
    // PRINT STARS
    for (int i = 1; i <= N; i++)
    {
        cout << "*";
    }
    cout << endl;
    // ROW:5
    // PRINT SPACE
    for (int i = 1; i <= (N - 3) / 2; i++)
    {
        for (int i = 1; i <= (N - 3) / 2 + 1; i++)
        {
            cout << " ";
        }
        // PRINT STAR
        cout << "*";

        // PRINT SPACE
        for (int i = 1; i <= (N - 3) / 2; i++)
        {
            cout << " ";
        }
        // PRINT STAR
        cout << "*";
        cout << endl;
    }

    // ROW:6
    // PRINT STAR
    for (int i = 1; i <= (N + 1) / 2; i++)
    {
        cout << "*";
    }

    // PRINT SPACE
    for (int i = 1; i <= (N - 3) / 2; i++)
    {
        cout << " ";
    }
    cout << "*";

    return 0;
}
