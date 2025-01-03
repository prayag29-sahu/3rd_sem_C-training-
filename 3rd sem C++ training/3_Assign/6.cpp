// WAP to display the sum of first 10 positive integers.


#include<iostream>
using namespace std;
int main()
{
int i,sum;
i=1;
sum=0;
while(i<=10)
{
sum=sum+i;
i=i+1;
}
cout<<sum;
return 0;
}