// 1/2 + 2/3  + 3/4 + ………….n/n+1


#include <iostream>
using namespace std;

int main()
{
    double n, s = 0.0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        s = s + i / (i+1.0);
    }
    cout << s;
    return 0;
}