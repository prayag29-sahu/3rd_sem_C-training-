// fibbonacci series 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55.................................

#include <iostream>
    using namespace std;

int main()
{
    int n, a = 0, b = 1, c = 0;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        cout << c << endl;
        a = b;
        b = c;
        c = a + b;
    }
    cout << c;
    return 0;
}