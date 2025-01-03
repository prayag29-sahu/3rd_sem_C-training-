//  1^3/3^2 + 3^7/7^5 + 5^15/15^10 + 7^31/31^19 +  ..............

#include <iostream>
using namespace std;

int main()
{
    int n, s = 0, x, r1 = 1, r2 = 1, y,z;
    cin >> n;
    for (int i = 1; i <= n; i+=2)
    {
        x = 1;
        y = 3;
        for (int j = 1; j <= y; j++)
        {
            r1 = r1 * x;
        }
        x = x + 2;
        z = 2;
        for (int k = 1; k <= z; k++)
        {
             r2 = r2 * y;
        }
        z = (i + y) / 2;
        y = y + 4 * i;
            s = s + r1 / r2;
    }
    cout << s;
    return 0;
}

/*
//  1^3/3^2 + 3^7/7^5 - 5^15/15^10 + 7^31/31^19 -  ..............

#include <iostream>
using namespace std;

int main()
{
    int n, s = 0, x, r1 = 1, r2 = 1, y, p = 1,z;
    cin >> n;
    for (int i = 1; i <= n; i+=2)
    {
        x = 1;
        y = 3;
        for (int j = 1; j <= y; j++)
        {
            r1 = r1 * x;
        }
        x = x + 2;
        z = 2;
        for (int k = 1; k <= z; k++)
        {
             r2 = r2 * y;
        }
        z = (i + y) / 2;
        y = y + 4 * i;
        if (p)
            s = s + r1 / r2;
        else
            s = s - r1 / r2;
        p = !p;
    }
    cout << s;
    return 0;
}
*/