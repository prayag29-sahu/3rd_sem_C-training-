/*
WAP to accept any number and print in reverse order.
[ Hint : 256 then answer will be 652 ]
*/

#include <iostream>
using namespace std;

int main()
{
    long n;
    int rem;
    cin >> n;
    while (n > 0)
    {
        rem = n % 10;
        n /= 10;
        cout << rem ;
    }

    return 0;
}