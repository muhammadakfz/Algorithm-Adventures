#include <bits/stdc++.h>
#define int long long
using namespace std;

int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

signed main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &x : a) cin >> x;

    int total_gcd = a[0];
    for (int i = 1; i < n; i++) {
        total_gcd = gcd(total_gcd, a[i]);
    }

    if (total_gcd > 1) {
        cout << -1 << endl;
        return 0;
    }

    int ans = INT_MAX;

    for (int i = 0; i < n; i++) {
        int cur = a[i];
        if (cur == 1) {
            ans = 1;
            break;
        }
        for (int j = i + 1; j < n && j - i + 1 < ans; j++) {
            cur = gcd(cur, a[j]);
            if (cur == 1) {
                ans = min(ans, j - i + 1);
                break;
            }
        }
    }

    cout << ans << endl;
    return 0;
}

