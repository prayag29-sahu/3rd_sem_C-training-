// WAP to accept any binary number and convert into decimal.

#include <iostream>
using namespace std;

int main()
{
    int binary, decimal = 0, remainder, base = 1;
    cin >> binary;
    while (binary != 0)
    {
        remainder = binary % 10;
        decimal = decimal + remainder * base;
        binary = binary / 10;
        base = base * 2;
    }
    cout << decimal;

    return 0;
}