/*
WAP to display following pattern on the screen using Nested Loop.

         1
       12
     123
   1234
 12345

*/

#include <iostream>
using namespace std;

int main()
{
    int i, n;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (int k = n; k > i; k--)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
}