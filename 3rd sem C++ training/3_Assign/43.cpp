/*
WAP to accept any number and display the sum of its each digit until you get single digit.
  [ Hint : 7868 then answer will be 7+8+6+8=29; 2+9=11; 1+1=2 ]
*/

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    do
    {
        m = 0;
        while (n > 0)
        {
            m = m + n % 10;
            n /= 10;
        }
        n = m;
    } while (n > 9);
    cout << m;

    return 0;
}