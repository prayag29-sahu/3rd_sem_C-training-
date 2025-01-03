// Armstrong number formula   x^n+y^n+z^n+..., where x,y and z are digits and n is number of digits                         153 = 1^3+5^3+3^3=153
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

    if (num==res2){
        cout << "Number " << res2 << " is Armstrong number.";}
    else{
        cout << "Number " << res2 << " is not Armstrong number.";}
    return 0;
}

// Armstrong number formula   x^n+y^n+z^n+..., where x,y and z are digits and n is number of digits

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     int num, rem, res1 = 0, res2 = 0, count = 0;
//     cin >> num;
//     int num1 = num;
//     while (num1 > 0)
//     {
//         count++;
//         num1 = num1 / 10;
//     }
//     while (num > 0)
//     {
//         rem = num % 10;
//         res1 = pow(rem, count);
//         res2 = res2 + res1;
//         num = num / 10;
//     }
//     cout << res2;
//     return 0;
// }
