// calculate the sum of all even or odd terms seperatly from fibbonacci series.

#include <iostream>
using namespace std;

int main()
{
    int n, a = 0, b = 1, c = 0, sume = 0, sumo = 0;
    cin >> n;
    for (int i = 1; i < n; i = i + 2)
    {
        sumo = sumo + c;
        a = b;
        b = c;
        c = a + b;
        sume = sume + c;
        a = b;
        b = c;
        c = a + b;
    }
    cout << sume << endl;
    cout << sumo << endl;
    if (sume > sumo)
        cout << "sum of even position digits is greater.";
    else if (sumo > sume)
        cout
            << "sum of even position digits is greater.";
    else
        cout << "both sum are equal.";

    return 0;
}