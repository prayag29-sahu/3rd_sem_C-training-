// WAP to find the LCM of has given two numbers.
#include <iostream>
using namespace std;

int main()
{
    int n, m, max;
    cin >> n >> m;
    if(n>m)
        max = n;
    else
        max = m;

    while (1)
    {
        if (max % n == 0 && max % m == 0)
        {
            cout << "LCM =" << max;
            break;
        }
        ++max;
    }

    return 0;
}
