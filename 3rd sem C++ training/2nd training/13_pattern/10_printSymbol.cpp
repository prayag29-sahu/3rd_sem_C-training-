/*
print Sastvik
n=5

* * *   *
    *   *
* * * * *
*   *
*   * * *


*/

#include <iostream>
using namespace std;

int main()
{
    int i, n;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((j >n/2+1 && j != n&&i<=n/2)||(i==n/2&&j<=n/2)||(j>=n/2+2&&i==n/2+2)||(j!=1&&j<=n/2&&i!=1&&i!=n/2+1))
                cout << "  ";
            else{
                cout << "* ";
            }
                
        }
        cout << endl;
    }
}