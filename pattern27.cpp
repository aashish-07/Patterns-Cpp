/*
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * * 
          *     * * * * * 
          *     * * * * * 
          * * * * * * * * 
          *     * * * * * 
          *     * * * * * 
* * * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
*/

#include <iostream>
using namespace std;

// we observe that this pattern is horizontally symmetrical

int main()
{
    // your code goes here
    int n;
    cin >> n;

    // print square pattern with n-1 rows
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << "\n";
    }

    // 	print n+1 stars
    for (int i = 1; i <= n + 1; i++)
    {
        cout << "*"
             << " ";
    }
    cout << endl;

    // 	print star & spaces
    for (int i = 1; i <= n / 2; i++)
    {
        for (int i = 1; i <= n * 2; i++)
        {
            cout << " ";
        }

        // print star
        cout << "*";

        // print n spaces
        for (int i = 1; i <= n; i++)
        {
            cout << " ";
        }

        // 	print n stars
        for (int i = 1; i <= n; i++)
        {
            cout << "*"
                 << " ";
        }

        cout << endl;
    }

    // 	print n spaces
    for (int i = 1; i <= n * 2; i++)
    {
        cout << " ";
    }

    // 	 print (n*3+1)/2 stars
    for (int i = 1; i <= (3 * n + 1) / 2; i++)
    {
        cout << "*"
             << " ";
    }
    cout << endl;

    // 	print star & spaces
    for (int i = 1; i <= n / 2; i++)
    {
        for (int i = 1; i <= n * 2; i++)
        {
            cout << " ";
        }

        // print star
        cout << "*";

        // print n spaces
        for (int i = 1; i <= n; i++)
        {
            cout << " ";
        }

        // 	print n stars
        for (int i = 1; i <= n; i++)
        {
            cout << "*"
                 << " ";
        }

        cout << endl;
    }

    // 	print n+1 stars
    for (int i = 1; i <= n + 1; i++)
    {
        cout << "*"
             << " ";
    }
    cout << endl;

    // 	print square pattern with n-1 rows
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
    return 0;
}
