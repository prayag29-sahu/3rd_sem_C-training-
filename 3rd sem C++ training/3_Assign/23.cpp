// WAP to check entered number is prime or not

#include <iostream>
using namespace std;

int main()
{
    int num, i;
    cin >> num;
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            cout << "Not prime";
            return 0;
        }
    }
    cout << "prime";
    return 0;
}