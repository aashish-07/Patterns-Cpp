#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, j, k = 0;
    for (i = 1; i <= n + 4; i++)
    {
        if (i <= 5)
        {
            k++;
        }
        else
        {
            k--;
        }

        for (j = 1; j <= n + 4; j++)
        {
            if (j <= 6 - k || j >= 4 + k)
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