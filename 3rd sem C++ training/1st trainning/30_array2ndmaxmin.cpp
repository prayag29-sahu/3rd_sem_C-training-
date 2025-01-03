// 2ndmax 2ndmin element of array
#include <iostream>
using namespace std;

int main() {
    int a[10],n,max1,max2,min1,min2,i;
    cin>>n;
    max1=1;
    min1=1;
    max2=1;
    min2=1;
    for(i=0;i<n;i++)
    {
    cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
    if(a[i]>=a[max1])
    max2=max1;
    max1=i;
    if(a[i]<=a[min1])
    min2=min1;
    min1=i;
    }
    cout<<a[max2]<<" "<<a[min2];
}