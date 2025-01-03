//    !1/1^1+!3/3^3+!5/5^5+.............

#include <iostream>
using namespace std;

int main()
{
    int n, f, s = 0, p, d;
    cin >> n;
    for (int i = 1; i <= n; i += 2)
    {
        f = 1;
        for (int j = 1; j <= i; j++)
        {
            f = f * j;
        }
        p = 1;
        for (int k = 1; k <= i; k++)
        {
            p = p * i;
        }
        d = f / p;
        s = s + d;
    }
    cout << s;
    return 0;
}