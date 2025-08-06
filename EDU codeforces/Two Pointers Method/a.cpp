#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m), c(n + m);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    for (; i < n; i++) c[k++] = a[i];
    for (; j < m; j++) c[k++] = b[j];

    for (int i = 0; i < n + m; i++) {
        cout << c[i] << " ";
    }

    return 0;
}
