// palindrom of factorial

#include <iostream>
    using namespace std;

int main()
{
    long n;
    int f = 1, res = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    while (f > 0)
    {
        res = res * 10 + f % 10;
        f /= 10;
    }
    cout << res;

    return 0;
}