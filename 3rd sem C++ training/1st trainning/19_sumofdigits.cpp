#include<iostream>
using namespace std;

int main()
{
    int num,digit;
    cin>>num;
    int sum =0;
    while(num!=0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    cout<<sum;
}