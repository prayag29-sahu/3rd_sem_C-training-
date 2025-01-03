#include <iostream>
using namespace std;

int main()
{
    int n, res1 = 1, res2 = 1, m, i, count = 1;
    cin >> n >> m;
    cout << "Table " << endl;

    for (i = 1; i <= 10; i++)
    {
        res1 = n * i;
        res2 = m * i;
        cout << "--------------------------------" << endl;
        cout << "   " << res1 << "   " << res2 << endl;
        if (res2 % n == 0 && res2 / n <= 10)
        {
            cout << "\n"<< res2;
            count++;
        }
    }
    cout << count;
    
}
