#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, j, k=7;
    for (i = 1; i <= n+2; i++)
    {
        for (j = 1; j <= n+2; j++)
        {
            if (j == i || j== 8-i)
            {
                if (j == k)
                    cout << "/";
                    else
                     cout << "\\";
            }
           
            else
                cout << "*";
        }
        cout << "\n";
        k--;
    }
    return 0;
}