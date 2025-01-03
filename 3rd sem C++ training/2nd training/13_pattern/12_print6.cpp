/*
print Sastvik
n=5

* * * * *
*
* * * * *
*       *
* * * * *
7

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
            if ((i != 1 && i != n / 2 + 1 && i != n && j > 1 && j < n) || (j == n && i < n / 2 + 1 && i != 1))
                cout << "  ";
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
}