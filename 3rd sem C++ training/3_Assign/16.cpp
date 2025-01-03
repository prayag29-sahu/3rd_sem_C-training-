// 1 + x + x2 + x3 …………. xn

#include <iostream>
using namespace std;

int main()
{
    double n,x, s = 1.0;
    cin >> n;
    cin >> x;
    for (int i = 1; i < n; i++)
    {
        s = s + i*x;
    }
    cout << s;
    return 0;
}