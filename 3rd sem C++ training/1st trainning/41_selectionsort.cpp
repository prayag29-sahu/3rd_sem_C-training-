// selection sort
#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        int mi = i;
        for (j = i+1; j < n; j++)
        {
            if (a[j] < a[mi])
            {
                mi = j;
            }
            swap(a[i], a[mi]);
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i];
    }
}

