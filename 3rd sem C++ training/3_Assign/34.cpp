/*
WAP to display following pattern on the screen using Nested Loop.

        *
      ***
    *****
  *******
*********

*/

#include <iostream>
using namespace std;

int main()
{
    int i, n,l=1;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (int k = n; k > i; k--)
        {
            cout << "  ";
        }
        for (int j = 1; j <= l; j++)
        {
            cout << "*";
        }
        l=l+2;
        cout << "\n";
    }
}