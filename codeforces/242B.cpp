#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int mn = INT_MAX, mx = INT_MIN;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        mn = min(mn, a[i]);
        mx = max(mx, b[i]);
    }

    for (int i = 0; i < n; i++) {
        if (a[i] == mn && b[i] == mx) {
            cout << i+1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}
