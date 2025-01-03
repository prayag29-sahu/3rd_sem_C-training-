// WAP to find the HCF of has given two numbers.

#include <iostream>
using namespace std;

int main()
{
    int a, b, rm, lcm, c;
    cin >> a >> b;
    c = a * b;

    while (b != 0)
    {
        rm = a % b;
        a = b;
        b = rm;
    }
    cout << "HCF = " << a << endl;
    lcm = c / a;
    cout << "LCM =" << lcm;
}