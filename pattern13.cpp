#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, j, k=0;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n + 2; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
            {
                if(j<=4)
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
            {

                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}