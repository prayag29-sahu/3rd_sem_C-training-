#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int pos;
    cin >> pos;

    for (int i = pos; i < n - 1; ++i) {
        a[i] = a[i + 1];
    }

    // Print the updated array
    for (int i = 0; i < n - 1; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
