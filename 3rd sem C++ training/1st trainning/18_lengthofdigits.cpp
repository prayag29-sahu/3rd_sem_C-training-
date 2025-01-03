#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num,length;
    cin>>num;
    length = (int)log10(num)+1;
    cout<<length;
}