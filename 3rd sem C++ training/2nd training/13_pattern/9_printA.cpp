/*
Print A
5
    *
   * *
  *   *
 * * * *
*       *

*/
#include <iostream>
using namespace std;

int main()
{
    int i, n;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (int j = i; j <= n - 1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            if ((j != 1 && j != n && i == n) || (j == n / 25 && i == n / 2 + 1))
            {
                cout << " ";
            }
            else
                cout << "*";
            cout << " ";
        }
        cout << "\n";
    }
}