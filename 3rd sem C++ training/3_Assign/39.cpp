/*
WAP to display following pattern on the screen using Nested Loop.


           1
         121
       12321
     1234321
   123454321

*/

#include <iostream>
using namespace std;

int main()
{
    int i, n, l = 1;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (int k = n; k > i; k--)
        {
            cout << "  ";
        }
        for (int j = 1; j <= l/2; j++)
        {
            cout << j;
        }
        for (int j = (l/2)+1; j >= 1; j--)
        {
            cout << j;
        }
        l = l + 2;
        cout << "\n";
    }
}