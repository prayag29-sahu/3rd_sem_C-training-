// array element find 
#include <iostream>
using namespace std;

int main() {
    int n,i,found;
    cin>>n;
    int a[n];
    found=0;
    for(i=0;i<n;i++)
    {
    cin>>a[i];
    }
    cin>>found;
    for(i=0;i<n;i++)
    {
    if(a[i]==found)
    {
    cout<<i<<endl;
    return 0;
    }
    }
cout<<"-1";
    return 0 ;
}