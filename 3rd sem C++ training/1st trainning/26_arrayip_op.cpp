// array elements I/O
#include <iostream>
using namespace std;

int main() {
    int a[10],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
    cout<<a[i]<<" ";
    }
    return 0;
}