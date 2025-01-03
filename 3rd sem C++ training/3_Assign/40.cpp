/*
WAP to accept any number and print in vertically.
[ Hint : 256 then answer should be
6
5
2 ]

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
        rem= n % 10;
        n /= 10;
        cout << rem<<endl;
    }
   
    return 0;
}