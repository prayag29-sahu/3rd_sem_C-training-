//WAP to calculate n^m


#include<iostream>
using namespace std;
int main()
{
int i,n,m,p;
i=1;
p=1;
cin>>n>>m;
while(i<=m)
{
p=p*n;
i++;
}
cout<<p;
return 0;
}