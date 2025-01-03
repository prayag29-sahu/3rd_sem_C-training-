/*
print N
n=5
*   *
**  *
* * *
*  **
*   *

*/

#include <iostream>
using namespace std;

int main()
{
    int i, n;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0 || j==n-1 || j == i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}