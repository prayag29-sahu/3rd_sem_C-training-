// 1 + 1/2  + 1/3 + ………….1/n

#include <iostream>
using namespace std;

int main()
{
    double n,  s = 0.0;
    cin >> n;
    for (int i = 1; i <= n; i ++)
    {
        s = s + 1.0/i;
    }
    cout << s;
    return 0;
}