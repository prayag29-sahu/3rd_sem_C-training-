/*
Lower traingle
n=5
* * * * *
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
    for (i = 1; i <= n; i++)
    {
        for (int j =1; j <i; j++)
        {
            cout << " ";
        }
        for (int j = n; j >= i; j--)
        {
            cout << "*";
            cout << " ";
        }
        cout << "\n";
    }
}