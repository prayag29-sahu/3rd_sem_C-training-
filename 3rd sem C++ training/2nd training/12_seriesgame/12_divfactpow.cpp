//  !1/!3^!5 + !2/!4^!6 + !3/!5^!7 +  ..............

#include <iostream>
using namespace std;

int main()
{
    int n, x, f1 = 1, f2 = 1, y,r=1, f = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        x = 3;
        y = 5;
        f = f * i;
        f1 = f1 * x;
        f2 = f2 * y;
        x++;
        y++;
    }
    for (int j = 1; j <= f2; j++)
    {
        r = r * f2;
    }
    cout << f / r;
    return 0;
}