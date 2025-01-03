// input any number contain even number of digits than sum the even places digit and sum of odd places digit than find which is greater sum
/*
for example 4538  4+3=7 and 5+8=13 13>7
*/

// #include <iostream>
// using namespace std;

// int main()
// {
//     long n;
//     int res1 = 0,res2=0;
//     cin >> n;
//     while (n > 0)
//     {
//         res1 = res1 + n % 10;
//         n /= 10;
//         res2 = res2 + n % 10;
//         n /= 10;
//     }
//     cout << res1<<endl;
//     cout << res2<<endl;
//     if(res1>res2)
//         cout << "sum of even place digit is greater.";
//     else
//         cout << "sum of odd place digit is greater.";

//     return 0;
// }

// input any number contain 6 and greater than 6 even number of digits than divide into equal part than pallindrom of each part than sum of each parts digit ang compare greater
/*
for example 769854 -> 769 854 -> 967 458 -> 22 17
*/

#include <iostream>
using namespace std;
int main()
{
    long n, x;

    int y, res1 = 0, sum1 = 0, res2 = 0, sum2 = 0, count = 0;
    cout << "input any number contain 6 and greater than 6 even number of digits : ";
    cin >> n;
    int m = n;
    while (m > 0)
    {
        y = m % 10;
        m /= 10;
        count++;
    }
    cout << count << endl;
    long pow = 1;
    for (int i = 1; i <= count / 2; i++)
    {
        pow = 10 * pow;
    }
    cout << pow << endl;
    while (n > pow)
    {
        x = n % pow;
        n /= pow;
    }
    cout << x << endl;
    cout << n << endl;

    while (n > 0)
    {
        res1 = n % 10;
        n /= 10;
        sum1 = res1 + sum1;
    }
    cout << sum1 << endl;

    while (x > 0)
    {
        res2 = x % 10;
        x /= 10;
        sum2 = res2 + sum2;
    }
    cout << sum2 << endl;

    if (sum1 > sum2)
        cout << "1st term reverse digits sum greater.";
    else if(sum2>sum1)
        cout << "2st term reverse digits sum greater.";
    else
        cout << "Both results are equal";
    return 0;
}