#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        if (n % 2 == 1) {
            for (int i = 0; i < n; ++i) {
                cout << (i % 2 == 0 ? -1 : 3) << (i + 1 == n ? '\n' : ' ');
            }
        } else {
            for (int i = 0; i < n - 2; ++i) {
                cout << (i % 2 == 0 ? -1 : 3) << ' ';
            }

            cout << -1 << ' ' << 2 << '\n';
        }
    }
    return 0;
}