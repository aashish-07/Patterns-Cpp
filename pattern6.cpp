/*

    *    
   * *   
  * * *  
 * * * * 
* * * * *

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, j,k;
    for (i = 1; i <= n; i++)
    {
        k=1;
        for (j = 1; j <= n + 4; j++)
        {
            if (j >= 6 - i && j <= 4 + i && k)
            {
                cout << "*";
                k=0;
            }
            else{
                cout << " ";
                k=1;
            }
        }
        cout << "\n";
    }
    return 0;
}