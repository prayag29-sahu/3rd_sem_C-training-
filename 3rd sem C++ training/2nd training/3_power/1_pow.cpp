//x^y 

#include <iostream>
using namespace std;

int main()
{
    int x,y, res = 1, i;
    cin >> x>>y;
    for (i = 1; i <= y; i++)
    {
        res = x * res;  
    }
    cout << res << endl;
    return 0;
}


