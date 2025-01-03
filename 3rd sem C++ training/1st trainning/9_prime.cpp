// check prime number

#include <iostream>
using namespace std;

int main()
{
  int num, i;
  cin >> num;
  for (i = 2; i <= num / 2; i++)
  {
    if (num % i == 0)
    {
      cout << "Not prime";
      return 0;
    }
  }
  cout << "prime";
  return 0;
}
/*
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
*/

// check prime numbers and find its fectorial

// #include <iostream>
// using namespace std;

// int main()
// {
//   int num, i,res=1;
//   cin >> num;
//   for (i = 2; i <= num / 2; i++)
//   {
//     if (num % i == 0)
//     {
//       cout << "Not prime";
//       return 0;
//     }
//   }
//   cout << "prime";

//   for (i = 2; i < num;i++)
//   {
//     res = res * i;
//   }
//   cout << res;
//   return 0;
// }

// check if number is not prime take another input than calcu the its power by prime number.
// exam 3 is prime and another input is 2 than calcu 2^3  result = 8

// #include <iostream>
// using namespace std;

// int main()
// {
//   int num, i,res=1;
//   cin >> num;
//   for (i = 2; i <= num / 2; i++)
//   {
//     if (num % i == 0)
//     {
//       cout << "Not prime";
//       return 0;
//     }
//   }
//   int num2;
//   cin >> num2;
//   for (i = 1; i <= num;i++)
//   {
//     res = res * num2;
//   }
//   cout << res;
//   return 0;
// }