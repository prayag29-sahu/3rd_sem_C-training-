// insertion sort  
#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (i = 1; i < n; ++i) {
        int key = a[i];
        int j = i - 1;
        
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i];
    }
}



