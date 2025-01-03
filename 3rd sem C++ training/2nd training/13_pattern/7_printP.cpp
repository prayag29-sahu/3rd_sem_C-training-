/*
lower right traingle
n=7 m=5
5
****
*   *
*   *
****
*
*
*

*/
#include <iostream>
using namespace std;

int main()
{
    int i, n, m;
    cin >> n >> m;//n=7 m=5
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (j == 0 || (i == 0 && j < m - 1) || (i == n / 2 && j < m - 1) || (j == m - 1 && i > 0 && i < n / 2))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    // for (int j = 1; j <= n / 2 + 1; j++)
    // {
    //     cout << "*";
    //     cout << " ";
    // }
    // cout << "\n";
    // for (int j = 1; j <= n / 2; j++)
    // {
    //     cout << "*";
    //     for (int j = 1; j <= n / 2 + 1; j++)
    //     {
    //         cout << " ";
    //     }
    // }
    // cout << "\n";
    // for (int j = 1; j <= n / 2 + 1; j++)
    // {
    //     cout << "*";
    //     cout << " ";
    // }

    // cout << "\n";
    // for (i = 1; i <= n / 2 ; i++)
    // {
    //     cout << "*";
    //     cout << "\n";
    // }
}