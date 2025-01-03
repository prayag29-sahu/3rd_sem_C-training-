// WAP to accept any decimal number and convert into binary.

#include <iostream>
using namespace std;

int main()
{
    int decimal, binary = 0, remainder, base = 1;
    cin >> decimal;
    while (decimal != 0)
    {
        remainder = decimal % 2;
        binary = binary + remainder * base;
        decimal = decimal / 2;
        base = base * 10;
    }
    cout << binary;

    return 0;
}