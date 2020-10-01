#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, j, k;
    for (i = 1; i <= n+2; i++)
    {
        k=7-i;
        for (j = 1; j <= n+2; j++)
        {
            if(j <= 8-i)
            {
                cout << k;
                k--;
            }
            else
            {
                cout<< " ";
            }
            
            
            

            // cout << " ";else
        }
        cout << "\n";
    }
    return 0;
}