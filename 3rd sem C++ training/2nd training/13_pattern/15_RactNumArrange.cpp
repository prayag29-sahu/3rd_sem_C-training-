/*
print Sastvik
n=7


4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4


*/

#include <iostream>
using namespace std;

int main()
{
    int i, n;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i != 1 && i != n && j > 1 && j < n)

            {
                if (i > 3 && i < n - 2 && j > 3 && j < n - 2)
                {
                    cout << "1 ";
                }
                else if (i > 2 && i < n - 1 && j > 2 && j < n - 1)
                {
                    cout << "2 ";
                }
                else
                {
                    cout << "3 ";
                }
            }
            else
            {
                cout << "4 ";
            }
        }
        cout << endl;
    }
}
