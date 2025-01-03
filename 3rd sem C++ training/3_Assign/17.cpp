// 1 - x + x2 - x3 …………. xn

#include <iostream>
using namespace std;
int main()
{
    double n, x, s = 1.0,p=1;
    cin >> n;
    cin >> x;
    for (int i = 1; i < n; i++)
    {
        if(p)
            s = s - i * x;
        else
            s = s + i * x;
        p = !p;
    }
    cout << s;
    return 0;
}