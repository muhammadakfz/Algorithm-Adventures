#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n], tmp[n];

    int temp = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        temp += a[i];
        tmp[i] = temp;
    }

    int q; cin >> q;
    while (q--) {
        int x; cin >> x;
        cout << lower_bound(tmp, tmp + n, x) - tmp + 1 << endl;
    }

    return 0;
}