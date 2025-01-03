// decimal to hex conversion
#include <iostream>
using namespace std;

int main()
{
    int decimal, remainder;
    string hex = "";

    cin >> decimal;

    if (decimal == 0)
    {
        hex = "0"; // Special case for zero
    }
    else
    {
        while (decimal != 0)
        {
            remainder = decimal % 16;
            if (remainder < 10)
                hex = char(remainder + 48) + hex; // add character 0-9 at the beginning
            else
                hex = char(remainder + 55) + hex; // add character A-F at the beginning
            decimal = decimal / 16;
        }
    }

    cout << "Hexadecimal equivalent: " << hex << endl;

}
