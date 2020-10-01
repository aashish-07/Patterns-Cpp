#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, j;
    char c;
    for (i = 1; i <= n; i++)
    {
        c='A';
        for (j = 1; j <= n + 2; j++)
        {
            if (j <= 5 - i || j >= 3 + i)
            {
                if(j<=4)
                {
                cout << c;
                c++;
                }
                else
                {
                    c--;
                    cout<<c;
                }
                
            }
            else{
               
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}