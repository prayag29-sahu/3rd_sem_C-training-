//table of any number not include odd numbers

#include <iostream>
    using namespace std;

int main()
{
    int n, res = 1, i;
    cin >> n;

    for (i = 1; i <= 10; i++)
    {
        res = n * i;
        if (res % 2 == 0)
            cout << res << endl;
    }
    return 0;
}