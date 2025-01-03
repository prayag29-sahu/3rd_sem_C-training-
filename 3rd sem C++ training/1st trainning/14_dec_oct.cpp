// decimal to octal conversion
#include <iostream>
using namespace std;

int main()
{
    int decimal, octal = 0, remainder, base = 1;
    cin >> decimal;
    while (decimal != 0)
    {
        remainder = decimal % 8;
        octal = octal + remainder * base;
        decimal = decimal / 8;
        base = base * 10;
    }
    cout << octal;

    return 0;
}