// 1 + x2/2! + x4/4! + ………….x/n!

#include <iostream>
using namespace std;

int main()
{
    double n, x, s = 1.0, d = 0.0;
    cin >> n;
    cin >> x;
    int j = 2;
    for (int i = 1; i < n; i ++)
    {
        int f = 1;
        for (int k = 1; k <= j;k++)
        {
            f = f * k;
        }
        d = (j * x) / f;
        s = s + d;
        j = j + 2;
    }
    cout << s;
    return 0;
}