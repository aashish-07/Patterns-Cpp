#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, j, k=0;
    for (i = 1; i <= n+4; i++)
    {
        int c=0;
        if (i < 6)
            k++;
        else
            k--;
        for (j = 1; j <= n; j++)
        { 
            if (j >= 6-k)
            {
                c++;
                cout << c;
                
            }
            else
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}