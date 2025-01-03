#include <iostream>
#include <set>
using namespace std;
int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    set<int> uniqueElements;
    for (int i = 0; i < n; ++i) {
        uniqueElements.insert(a[i]);
    }

    cout << "Array after removing duplicates: ";
    for (int element : uniqueElements) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}

