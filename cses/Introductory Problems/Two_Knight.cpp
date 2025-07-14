#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int k = i;
        if (k == 1) cout << 0 << endl;
        else if (k == 2) cout << 6 << endl;
        else {
            int ans = (((k * k) * (k * k - 1)) / 2) - (4 * (k - 1) * (k - 2));
            cout << ans << endl;
        }
    }
}
