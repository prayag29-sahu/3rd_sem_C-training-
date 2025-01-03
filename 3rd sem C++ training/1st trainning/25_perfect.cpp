// perfect number  number whose multipliers addition equal to number  example : 6 = 1,2,3 = 1+2+3= 6
#include <iostream>
using namespace std;

int main()
{
    int num, i,res=0;
    cin >> num;
    for (i = 1; i <num; i++)
    {
        if (num % i == 0)
        {
            res = res + i;
        }
    }
    if(res==num)
        cout << "perfect";
    else
        cout << "not perfect";
    return 0;
}