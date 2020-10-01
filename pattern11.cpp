#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, j, k = 0;
    for (i = 1; i <= n + 2; i++)
    {
        if (i <= 4)
        {
            
            k=i;
        }
        else
        {
            k--;
        }

        for (j = 1; j <= n + 2; j++)
        {
            if (j <= k )
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