// WAP to display and count the all prime numbers between 1 to n.

#include <iostream>
using namespace std;

int main()
{
    int num, count = 0, p;
    cin >> num;
    for (int i = 2; i <= num; i++)
    {
         p = 1;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                p = 0;
                break;
            }
        }
        if (p)
        {
            cout << i << endl;
            count++;
        }
    }
    cout << count;
    return 0;
}