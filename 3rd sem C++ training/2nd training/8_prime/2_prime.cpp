// prime factore of any number
#include <iostream>
using namespace std;

int main()
{
  int num,i,rm;
  cin>>num;
  while (num%2==0)
  {
  cout<<2<<" ";
  num = num/2;
  }
  for(i=3;i<=num;i+=2)
  {
  while (num%i==0)
  {
  cout<<i<<" ";
  num=num/i;
  }
  }
}
