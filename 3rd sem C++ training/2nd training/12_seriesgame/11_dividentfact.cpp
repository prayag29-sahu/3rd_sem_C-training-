//  1^1/!3 + 7^2/!9 + 19^4/!21 +  ..............

#include <iostream>
using namespace std;

int main()
{
    int n, s = 0, x, r1 = 1, r2 = 1, y, f, z;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        x = 1;
        y = 1;
        f = 1;
        for (int j = 1; j <= y; j++)
        {
            r1 = r1 * x;
        }
        x = x + 6 * i;
        z = 3;
        for (int k = 1; k <= z; k++)
        {
            f = f * y;
        }
        z = 3 + z * 2;
        y = y * 2;
        s = s + r1 / r2;
    }
    cout << s;
    return 0;
}