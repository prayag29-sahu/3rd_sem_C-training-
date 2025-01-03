
//worst case
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int b[n];
    int j = 0;

    b[j++] = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] != a[i - 1]) {
            b[j++] = a[i];
        }
    }

    for (int i = 0; i < j; i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}
/*best case

#include <iostream>
using namespace std;

int main()
{

    int a[] = {1, 1, 2, 2, 3, 3, 4};

    int size = sizeof(a) / sizeof(a[0]);
    int i = 0, j = i + 1;
    while (j < size)
    {
        if (a[i] != a[j])
        {
            a[i + 1] = a[j];
            i++;
        }
        j++;
    }
    size = i + 1;
    for (i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

*/