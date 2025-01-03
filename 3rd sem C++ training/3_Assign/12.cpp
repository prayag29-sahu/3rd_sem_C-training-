//1 + 2 + 3 +……………..n

#include <iostream>
using namespace std;
int main()
{
    int i,n, sum;
    i = 1;
    sum = 0;
    cin >> n;
    while (i <= n)
    {
        sum = sum + i;
        i = i + 1;
    }
    cout << sum;
    return 0;
}