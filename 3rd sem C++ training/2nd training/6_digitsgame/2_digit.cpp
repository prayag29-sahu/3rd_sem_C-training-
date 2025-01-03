// input any number contain even number of digits than sum the even places digit and sum of odd places digit than find which is greater sum
/*
for example 4538  4+3=7 and 5+8=13 13>7
*/
#include <iostream>
using namespace std;

int main()
{
    long n;
    int res1 = 0,res2=0;
    cin >> n;
    while (n > 0)
    {
        res1 = res1 + n % 10;
        n /= 10;
        res2 = res2 + n % 10;
        n /= 10;
    }
    cout << res1<<endl;
    cout << res2<<endl;
    if(res1>res2)
        cout << "sum of even place digit is greater.";
    else
        cout << "sum of odd place digit is greater.";

    return 0;
}