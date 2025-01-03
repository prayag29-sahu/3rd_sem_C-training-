/*
WAP to accept any number and check whether it is Armstrong or not.
[ Hint : 153 is an Armstrong no because  13+53+33=153]
*/
#include <iostream>
using namespace std;

int main()
{
    int num, rem, res1 = 0, res2 = 0;
    cin >> num;
    while (num > 0)
    {
        rem = num % 10;
        res1 = rem * rem * rem;
        res2 = res2 + res1;
        num = num / 10;
    }

    if (num == res2)
    {
        cout << "Number " << res2 << " is Armstrong number.";
    }
    else
    {
        cout << "Number " << res2 << " is not Armstrong number.";
    }
    return 0;
}