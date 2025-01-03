// octal to decimal conversion
#include <iostream>
using namespace std;

int main()
{
    int octal, decimal = 0, remainder, base = 1;
    cin >> octal;
    while (octal != 0)
    {
        remainder = octal % 10;
        decimal = decimal + remainder * base;
        octal = octal / 10;
        base = base * 8;
    }
    cout << decimal;

    return 0;
}