#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n + 4; j++)
        {
            if (j >= 5 - i && j <= 9 - i)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}