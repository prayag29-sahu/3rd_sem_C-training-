/*
WAP to check the entered number is palindrome or not.
[ Hint : 15351; in reverse also 15351]
*/

#include <iostream>
using namespace std;

int main()
{
    int num, rs, rm, orgnum;
    cin >> num;
    rs = 0;
    orgnum = num;
    while (num != 0)
    {
        rm = num % 10;
        rs = rs * 10 + rm;
        num = num / 10;
    }
    if (orgnum == rs)
    {
        cout << "Number is palindrom.";
    }
    else
    {
        cout << "Number is not a palindrom.";
    }
}