
//table of only odd number

#include <iostream>
    using namespace std;

int main()
{
    int n, res = 1, i;
    cin >> n;
    if (n % 2 == 0)
    {
        for (i = 1; i <= 10; i++)
        {
            res = n * i;
            cout << res << endl;
        }
    }
    else
        cout << "odd number";
    return 0;
}