// print the terms which are appearing only on the odd position of fibbonacci series

#include <iostream>
using namespace std;

int main()
{
    int n, a = 0, b = 1, c = 0;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
            cout << c<< endl;

            a = b;
            b = c;
            c = a + b;
            a = b;
            b = c;
            c = a + b;
    }
    return 0;
}