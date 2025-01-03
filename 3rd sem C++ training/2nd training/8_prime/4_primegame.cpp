// check if number is not prime take another input than calcu the its power by prime number.exam 3 is prime and another input is 2 than calcu 2 ^ 3 result = 8

#include <iostream>
    using namespace std;

int main()
{
    int num, i, res = 1;
    cin >> num;
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            cout << "Not prime";
            return 0;
        }
    }
    int num2;
    cin >> num2;
    for (i = 1; i <= num; i++)
    {
        res = res * num2;
    }
    cout << res;
    return 0;
}