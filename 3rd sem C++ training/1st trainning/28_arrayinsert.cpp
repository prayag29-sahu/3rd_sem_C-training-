// insert element on array of any position
#include <iostream>
using namespace std;

int main()
{
    int n, i, pos, elem;
    cin >> n;
    int a[n + 1];

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> elem;
    cin >> pos;
    for (i = n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos - 1] = elem;
    for (i = 0; i < n + 1; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}