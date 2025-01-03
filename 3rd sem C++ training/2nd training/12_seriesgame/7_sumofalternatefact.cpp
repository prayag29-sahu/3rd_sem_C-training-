// !1-!3+!5-!7+...........

#include <iostream>
using namespace std;

int main()
{
    int n, f, s = 0,p=1;
    cin >> n;
    for (int i = 1; i <= n; i += 2)
    {
        f = 1;
        for (int j = 1; j <= i; j++)
        {
            f = f * j;
        }
        if(p)
            s = s + f;
        else
            s = s - f;
        p = !p;
    }
    cout << s;
    return 0;
}