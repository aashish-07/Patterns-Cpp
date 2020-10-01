#include <iostream>
using namespace std;
int main()
{
    int n;
    char c;
    cin >> n;
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        c = 'A';
        for (j = 1; j <= 8; j++)
        {
            if (j >= 5 - i && j <= 4 + i)
            {
                if (j == 5)
                c = '1';
                cout << c;
                c++;
            }
            else
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}