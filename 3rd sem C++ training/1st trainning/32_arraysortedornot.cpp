// check array is sorted or not in ascending order 
#include <iostream>
using namespace std;

int main() {
    int a[10],n,i;
    cin>>n;
    
    for(i=0;i<n;i++)
    {
    cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
    if(a[i]>a[i+1])
    {
    cout<<"Not Sorted array";
    return 0;
    }
    
    }
    cout<<"Sorted array";
    return 0 ;
}