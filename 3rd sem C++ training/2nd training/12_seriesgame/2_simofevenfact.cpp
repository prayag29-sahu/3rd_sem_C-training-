//!2+!4+!6+!8+...............

#include <iostream>
using namespace std;

int main()
{
    int n, f, s = 0;
    cin >> n;
    for (int i = 2; i <= n; i += 2)
    {
        f = 1;
        for (int j = 1; j <= i; j++)
        {
            f = f * j;
        }
        s = s + f;
    }
    cout << s;
    return 0;
}