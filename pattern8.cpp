#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, j, k;
    for (i = 1; i <= n - 1; i++)
    {
        k = 0;
        for (j = 1; j <= n + 2; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
            {
                if (j <= 4)
                {
                    k++;
                    cout << k;
                }
                else
                {
                    k--;
                    cout << k;
                }
            }

            else
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}