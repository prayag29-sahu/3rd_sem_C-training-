#include <iostream>
using namespace std;

int main()
{
    char hexDigit;
    int decimal = 0, base = 1, value;

    cout << "Enter a hexadecimal number (end with any non-hex character): ";

    // Read the hexadecimal input starting from the least significant digit
    while (cin >> hexDigit)
    {
        if (hexDigit >= '0' && hexDigit <= '9')
        {
            value = hexDigit - '0'; // Convert '0'-'9' to 0-9
        }
        else if (hexDigit >= 'A' && hexDigit <= 'F')
        {
            value = hexDigit - 'A' + 10; // Convert 'A'-'F' to 10-15
        }
        else if (hexDigit >= 'a' && hexDigit <= 'f')
        {
            value = hexDigit - 'a' + 10; // Convert 'a'-'f' to 10-15 (in case of lowercase input)
        }
        else
        {
            break; // Stop when encountering non-hexadecimal input
        }

        decimal = decimal * 16 + value; // Update decimal value
    }

    cout << "Decimal equivalent: " << decimal << endl;

}
