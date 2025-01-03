// HCF/GCD and LCM
#include <iostream>
using namespace std;

int main() {
    int a,b,rm,lcm,c;
    cin>>a>>b;
    c=a*b;
    // int d = a;
    while (b != 0)
    {
    rm=a%b;
    a=b;
    b=rm;
    }
    cout<<"HCF = "<<a<<endl;
    lcm=c/a;
    cout<<"LCM ="<<lcm;
}