  
//     * 
//    ***
//   *****  
//  *******
// *********
//  *******
//   *****
//    ***
//     *
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i,r,j,k=0;
    r = (n+1)/2;
    for (i = 1; i <= n; i++)
    {
        i<=r?k++:k--;
        
        for (j = 1; j <= n; j++)
        {
            if (j >= r + 1 - k && j <= r - 1 + k)
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