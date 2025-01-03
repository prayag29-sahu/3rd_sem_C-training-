// find the sum of the terms which are appearing only on the even position of fibbonacci series

#include <iostream>
    using namespace std;

int main()
{
    int n, a = 0, b = 1, c = 0, sum = 0;
    cin >> n;
    for (int i = 1; i < n; i = i + 2)
    {
        a = b;
        b = c;
        c = a + b;
        sum = sum + c;
        a = b;
        b = c;
        c = a + b;
    }
    cout << sum;
    return 0;
}