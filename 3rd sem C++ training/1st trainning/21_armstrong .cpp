#include <iostream>
#include <cmath>
using namespace std;

int main() {
     int num,n,rm,power,sum,orgnum;
     cin>>num;
     n=(int)log10(num)+1;
     sum=0;
     orgnum=num;
     while(num!=0)
     {
     rm=num%10;
     num=num/10;
     power=pow(rm,n);
     sum=sum+power;
     }
     if(orgnum==sum)
     {
     cout<<"Armstrong.";
     }
     else{
    cout<<"Not Armstrong.";
    }
}
    