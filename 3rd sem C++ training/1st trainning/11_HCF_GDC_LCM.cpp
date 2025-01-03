// HCF and GCD and LCM
#include <iostream>
using namespace std;

int main() {
    int a,b,rm,lcm,c;
    cin>>a>>b;
    c=a*b;
    while (b!=0)
    {
    rm=a%b;
    a=b;
    b=rm;
    }
    cout<<a<<endl;
    lcm=c/a;
    cout<<lcm;
}