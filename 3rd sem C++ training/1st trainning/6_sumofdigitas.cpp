#include <iostream>
using namespace std;

int main()
{
    long n;
    int res = 0;
    cin >> n;
    while (n > 0)
    {
        res = res + n%10;
        n /= 10;
    }
    cout << res;
    return 0;
}