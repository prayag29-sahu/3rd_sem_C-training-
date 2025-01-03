/*
42
 WAP to accept any number and display the sum of its each digit.
 [ Hint : 256 then answer will be 2+5+6=13 ]
*/

#include <iostream>
using namespace std;

int main()
{
    long n;
    int res = 0;
    cin >> n;
    while (n > 0)
    {
        res = res + n % 10;
        n /= 10;
    }
    cout << res;
    return 0;
}