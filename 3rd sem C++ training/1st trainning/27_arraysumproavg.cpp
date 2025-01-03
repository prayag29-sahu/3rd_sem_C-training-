// array sum product and average 
#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    int a[10],n,sum, product;
    cin>>n;
    sum=0;
    product =1;
    double avg;
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    sum=sum+a[i];
    product = product* a[i];
    }
    avg=(double)sum/(double)n;
    cout<<sum<<endl;
    cout<<product<<endl;
    cout<<fixed<<setprecision(2)<<(double)avg;
}