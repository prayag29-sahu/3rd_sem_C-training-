//  1^2/!2 + 3^4/!4 + 5^6/!6 + .......    

#include <iostream>
using namespace std;

int main()
{
    int n, f, s = 0, p, d;
    cin >> n;
    for (int i = 1; i <= n; i += 2)
    {
        p = 1;
        for (int k = 1; k <= i+1; k++)
        {
            p = p * i;
        }
        f = 1;
        for (int j = 1; j <= i+1; j++)
        {
            f = f * j;
        }
        d = p / f;
        s = s + d;
    }
    cout << s;
    return 0;
}