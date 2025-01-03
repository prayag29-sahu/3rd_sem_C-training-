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


//  x ^ (y + 1) and (x + 1) ^ (y + 2) and (x - 2) ^ (y + 3)

// #include <iostream>
// using namespace std;

// int main()
// {
//     int x, y;
//     cin >> x >> y;
//     int res1 = 1, res2 = (x + 1), res3 = (x - 2) * (x - 2), i;
//     for (i = 1; i <= y+1; i++)
//     {
//         res1 = x * res1;
//         res2 = (x + 1) * res2;
//         res3 = (x - 2) * res3;
//     }
//     cout << res1 <<"\n"<<res2<<"\n"<<res3<< endl;
//     return 0;
// }