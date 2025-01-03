/*
WAP to display following pattern on the screen using Nested Loop.

*********
  *******
    *****
      ***
        *


*/

#include <iostream>
using namespace std;

int main()
{
    int i, n,l;
    cin >> n;
    l = (n * 2)-1;
    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << "  ";
        }

        for (int k = l; k >= i; k--)
        {
            cout << "*";
        }
        l = l - 1;
        cout << "\n";
    }
}