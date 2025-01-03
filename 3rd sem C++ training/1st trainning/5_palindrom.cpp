#include <iostream>
using namespace std;

int main()
{
    long n;
    int res = 0;
    cin >> n;
   while(n>0)
   {
       res = res * 10 + n % 10;
       n /= 10;
   }
    cout << res;
    return 0;
}
/*
#include<iostream>
using namespace std;

int main()
{
    int num,rs,rm,orgnum;
    cin>>num;
    rs =0;
    orgnum=num;
    while(num!=0)
    {
        rm = num % 10;
        rs = rs * 10 + rm;
        num = num / 10;
    }
    if(orgnum==rs)
    {
            cout<<"Number is palindrom.";
    }
    else
    {
            cout<<"Number is not a palindrom.";
    }

}
*/

// palindrom of factorial

// #include <iostream>
// using namespace std;

// int main()
// {
//     long n;
//     int f = 1, res = 0;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         f = f * i;
//     }
//     while (f > 0)
//            {
//                res = res * 10 + f % 10;
//                f /= 10;
//            }
//             cout << res;
        
//     return 0;
// }