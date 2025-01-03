// reverse the array
#include <iostream>
using namespace std;

int main() {
    int a[10],n,i;
    cin>>n;
    
    for(i=0;i<n;i++)
    {
    cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
    cout<<a[i]<<" ";
    }
    cout<<endl;
    //reverse not causally 
    /*
    for(i=n-1;i>=0;i--)
    {
    cout<<a[i]<<" ";
    }
    */
    //reverse using swap 
    /*
    for(i=0;i<n/2;i++)
    {
    swap(a[i],a[n-i-1]);
    }
    for(i=0;i<n;i++)
    {
    cout<<a[i]<<" ";
    }
    */
    //reverse using swap with another array
    /*
    int b[10];
    for(i=0;i<n;i++)
    {
    swap(b[i],a[n-i-1]);
    }
    for(i=0;i<n;i++)
    {
    cout<<b[i]<<" ";
    }
    */
    
}