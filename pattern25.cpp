// 1234   
// 234    
// 34     
// 4      
// 34     
// 234    
// 1234   
#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int N;
    cin >> N;
    int K = 0, p = 0;
    for (int i = 1; i <= (N * 2) - 1; i++)
    {
        i <= N ? K = i : K--;
        if (i == N + 1)
        {
            K--;
        }
        p = K;
        for (int j = 1; j <= (N * 2) - 1; j++)
        {
            if (j <= N - i + 1)
            {
                cout << K;
                K++;
            }

            else if (j <= i - (N - 1))
            {
                cout << p;
                p++;
            }

            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
