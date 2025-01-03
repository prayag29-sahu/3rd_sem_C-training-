//perfect square 
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  int num,sqt;
  cin>>num;
  sqt=sqrt(num);
  if(sqt*sqt==num)
  {
  cout<<"Perfect square";
  }
  else
  {
  cout<<"Not perfect square";
  }
}