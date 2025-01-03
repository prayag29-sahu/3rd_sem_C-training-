/*
WAP to display following pattern on the screen using Nested Loop.

*****
  ****
    ***
      **
        *
*/

#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (int k = 1; k < i; k++)
        {
            cout << "  ";
        }
        for (int j = n; j >= i; j--)
        {
            cout << "*";
        }
        cout << "\n";
    }
}