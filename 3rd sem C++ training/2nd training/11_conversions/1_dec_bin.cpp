// integer to binary conversion
#include <iostream>
using namespace std;

int main()
{
    int decimal, binary = 0, remainder,base=1;
    cin >> decimal;
    while(decimal!=0){
        remainder = decimal % 2;
        binary = binary + remainder * base;
        decimal = decimal / 2;
        base = base * 10;
    }
    cout << binary;

    return 0;
}


/*
 for integer or decimal to binary
int main()
{
    int inum, rem = 0, sum = 0, mul = 1;
    cin >> inum;
    while (inum != 0)
    {
        rem = inum % 2;
        sum = sum + rem * mul;
        inum = inum / 2;
        mul = mul * 10;
    }
    cout << sum<<endl;
    double dnum;
    cin >> dnum;
    for (int i = 0; i < 4; i++)
    {
        dnum = dnum * 2;
        // res = (res) * 2;
        // cout << dnum << endl;
        if (dnum > 0)
            cout << "1";
        else
            cout << "0";
    }

    return 0;
}*/