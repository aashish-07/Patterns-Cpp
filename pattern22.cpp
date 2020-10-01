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
        c = '1';
        for (j = 1; j <= 7; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
            {
                if (j == 5 && i>=2)
                    c = 'A';
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