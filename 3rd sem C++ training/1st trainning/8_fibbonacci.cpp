// fibbonacci series 0,1,1,2,3,5,8,13,21,34,55.................................

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n,a=0,b=1,c=0;
//     cin >> n;
//     for (int i = 1; i < n; i++)
//     {
//         cout << c << endl;
//         a = b;
//         b = c;
//         c = a + b;
//     }
//     cout << c;
//     return 0;
// }

// print the terms which are appearing only on the odd position of fibbonacci series
/*
#include <iostream>
using namespace std;

int main()
{
    int n, a = 0, b = 1, c = 0;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
            cout << c<< endl;

            a = b;
            b = c;
            c = a + b;
            a = b;
            b = c;
            c = a + b;
    }
    return 0;
}
*/
// find the sum of the terms which are appearing only on the even position of fibbonacci series

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, a = 0, b = 1, c = 0, sum = 0;
//     cin >> n;
//     for (int i = 1; i < n; i = i + 2)
//     {
//         a = b;
//         b = c;
//         c = a + b;
//         sum = sum + c;
//         a = b;
//         b = c;
//         c = a + b;
//     }
//     cout << sum;
//     return 0;
// }

// calculate the sum of all even or odd terms seperatly from fibbonacci series.

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, a = 0, b = 1, c = 0, sume = 0, sumo = 0;
//     cin >> n;
//     for (int i = 1; i < n; i = i + 2)
//     {
//         sumo = sumo + c;
//         a = b;
//         b = c;
//         c = a + b;
//         sume = sume + c;
//         a = b;
//         b = c;
//         c = a + b;
//     }
//     cout << sume << endl;
//     cout << sumo << endl;
//     if (sume > sumo)
//         cout << "sum of even position digits is greater.";
//     else if (sumo > sume)
//         cout
//             << "sum of even position digits is greater.";
//     else
//         cout << "both sum are equal.";

//     return 0;
// }