// 0 and 1 print seperately
//  1 0 1 0 1 1
#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int start, end;
    start = 0;
    end = n - 1;
    while (start < end)
    {
        while (a[start] != 1 && start < end)
        {
            start++;
        }
        while (a[end] != 0 && start < end)
        {
            end--;
        }
        a[start] = 0;
        a[end] = 1;
        start++;
        end--;
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i];
    }
}
