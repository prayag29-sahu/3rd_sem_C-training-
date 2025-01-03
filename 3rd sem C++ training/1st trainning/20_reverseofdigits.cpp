#include<iostream>
using namespace std;

int main()
{
    int num,rs,rm;
    cin>>num;
    rs =0;
    while(num!=0)
    {
        rm = num % 10;
        rs = rs * 10 + rm;
        num = num / 10;
    }
    cout<<rs;
}