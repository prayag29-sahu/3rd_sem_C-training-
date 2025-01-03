//WAP to calculate the factorial of any number using function.

#include <iostream>
using namespace std;

int fact(int n){
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}
int main()
{
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}