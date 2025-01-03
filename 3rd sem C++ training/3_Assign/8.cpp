//WAP for display the sum of all even numbers between 1 to 100


#include<iostream>
using namespace std;
int main()
{
int i,sum;
i=2;
sum=0;
while(i<=100)
{
sum=sum+i;
i=i+2;
}
cout<<sum;
return 0;
}