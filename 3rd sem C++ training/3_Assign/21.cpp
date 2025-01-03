// 1 + x/1! + x3/3! + ………….x/n!


#include <iostream>
using namespace std;

int main()
{
    double n, x, s = 1.0, d = 0.0;
    cin >> n;
    cin >> x;
    for (int i = 1; i <= n; i=i+2)
    {
        int f = 1;
        for (int j = 1; j <= i; j++)
        {
            f = f * j;
        }
        d = (i * x) / f;
        s = s + d;
        cout << d << endl;
    }
    cout << s;
    return 0;
}