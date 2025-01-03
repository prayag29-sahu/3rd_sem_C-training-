// check prime numbers and find its fectorial

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
    cout << "prime";

    for (i = 2; i < num; i++)
    {
        res = res * i;
    }
    cout << res;
    return 0;
}