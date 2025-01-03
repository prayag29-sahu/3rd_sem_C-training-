// 1 + x + x2/2 + x3/3 + ………….xn/n

#include <iostream>
using namespace std;

int main()
{
    double n, x, s = 1.0,d=0.0;
    cin >> n;
    cin >> x;
    for (int i = 1; i < n; i++)
    {
        d = (i * x) / i;
        s = s + d;
    }
    cout << s;
    return 0;
}