#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;

signed main() {

    int n, x;
    cin >> n >> x;

    vector<int> c(n), dp(x + 1, 0);
    for(int i = 0; i < n; i++) cin >> c[i];

    dp[0] = 1;
    // for (int i = 1; i <= x; i++) {
    //    for (auto coin: c) {
            // cout << "Processing coin: " << coin << " for amount: " << i << endl;
    //        if (i - coin >= 0) dp[i] += dp[i - coin] % MOD;
            // cout << i - coin << " -> " << dp[i] << endl;
    //        dp[i] %= MOD;
    //    }
    // }
    
    for (auto coin: c) {
        for (int i = coin; i <= x; i++) {
            dp[i] = (dp[i] + dp[i - coin]) % MOD;
            // cout << "Using coin: " << coin << ", updating dp[" << i << "] to " << dp[i] << endl;
        }
    }

    cout << dp[x] << endl;

    return 0;
}
