//  1^1/2^2 - 2^3/6^4 + 4^5/18^8 - ..............

#include <iostream>
using namespace std;

int main()
{
    int n, s = 0, x, r1 = 1, r2 = 1, y, p = 1;
    cin >> n;
    for (int i = 1; i <= n; i += 2)
    {
        x = 1;
        y = 2;
        for (int j = 1; j <= i; j++)
        {
            r1 = r1 * x;
        }
        x = x * 2;
        for (int k = 1; k <= x; k++)
        {
            r2 = r2 * y;
        }
        y = y * 3;

        if (p)
            s = s + r1 / r2;
        else
            s = s - r1 / r2;
        p = !p;
    }
    cout << s;
    return 0;
}