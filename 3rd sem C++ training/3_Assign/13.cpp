// 1- 2 + 3 - 4……………..n

#include <iostream>
using namespace std;

int main()
{
    int n,  s = 0, p = 1;
    cin >> n;
    for (int i = 1; i <= n; i ++)
    {
        if (p)
            s = s + i;
        else
            s = s - i;
            
        p = !p;
    }
    cout << s;
    return 0;
}