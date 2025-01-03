/*
WAP for multiplication table generation. (Output should be on following format)
[ Hint : Enter No. : 6 ; 
Output : 6x1=6	
	6 x2=12  , 
	…”…”}
*/


#include<iostream>
using namespace std;
int main()
{
int i,table,num;
i=1;
table=1;
cout<<"Enter No. : ";
cin>>num;
while(i<=10)
{
table=i*num;
cout<<num <<" X "<<i<<"="<<table<<endl;
i=i+1;
}

return 0;
}