#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 998244353;

int pow(int base, int exp) {
    int res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }

    return res;
}

int modularInv(int n) {
    return pow(n, MOD - 2);
}

signed main() {

    int n, m;
    cin >> n >> m;

    vector<int> dp(m + 1);
    dp[0] = 1;

    vector<vector<pair<int, int>>> s(m + 1);

    int sum = 1;

    for (int i = 0; i < n; ++i) {
        int l, r, p, q;
        cin >> l >> r >> p >> q;

        int x = modularInv(q);
        int y = modularInv(q - p);

        int v = (p * y) % MOD;
        int f = ((q - p) * x) % MOD;

        sum = (sum * f) % MOD;

        s[r].push_back({l, v});
    }

    for (int i = 1; i <= m; ++i) {
        for (auto [l, v] : s[i]) dp[i] = (dp[i] + dp[l - 1] * v) % MOD;
    }

    int ans = (dp[m] * sum) % MOD;
    cout << ans << "\n";

    return 0;
}
