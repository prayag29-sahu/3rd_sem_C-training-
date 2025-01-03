#include <iostream>
using namespace std;
void delay()
{
    for (int i = 0; i < 500000; i++)
    {
        for (int i = 0; i < 1000; i++);
    }
}
int main()
{
    char cursor[] = {'|', '/', '-', '\\'};
    for (int i = 0; i < 52; i++)
    {
        cout << cursor[i % 4]; // revise after 4
        delay();
        cout << '\b'; // for deletion
    }
}