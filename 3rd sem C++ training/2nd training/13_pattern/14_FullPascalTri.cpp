/*
Full Pascal Triangle
n=7
   *
  * *
 * * *
* * * *
 * * *
  * *
   *
*/
#include <iostream>
using namespace std;

int main()
{
    int i, n;
    cin >> n;
    for (i = 1; i <= n / 2 + 1; i++)
    {
        for (int j = i; j <= n / 2; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
            cout << " ";
        }
        cout << "\n";
    }
    for (i = 1; i <= n / 2; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = n / 2; j >= i; j--)
        {
            cout << "*";
            cout << " ";
        }
        cout << "\n";
    }
}
