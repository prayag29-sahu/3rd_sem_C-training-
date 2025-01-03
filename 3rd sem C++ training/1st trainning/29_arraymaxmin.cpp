// max min element of array
#include <iostream>
using namespace std;

int main() {
    int a[10],n,max,min,i;
    cin>>n;
    max=1;
    min=1;
    for(i=0;i<n;i++)
    {
    cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
    if(a[i]>=a[max])
    max=i;
    if(a[i]<=a[min])
    min=i;
    }
    cout<<a[max]<<" "<<a[min];
}