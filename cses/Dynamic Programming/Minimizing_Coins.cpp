#include <bits/stdc++.h>
#define int long long
using namespace std;
 
// vector<int> coins, dp;
 
// int minCoins(int x) {
//    if (x < 0) return INT_MAX;
//    if (x == 0) return 0;
//    if (dp[x] != -1) return dp[x];
//
//    int best = INT_MAX;
//    for (auto c: coins) {
//        int res = minCoins(x - c);
//        if (res != INT_MAX)
//            best = min(best, res+1);
//    }
 
//    return dp[x] = best;
// }
 
signed main() {
 
    int n, x; cin >> n >> x;
 
    // coins.resize(n);
    
    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
 
    int INF = 1e18;
    vector<int> dp(x+1, INF);
    dp[0] = 0;
 
    for (int i = 1; i <= x; i++) {
        for (auto c: coins) {
            if (i - c >= 0) {
                dp[i] = min(dp[i], dp[i - c] + 1);
            }
        }
    }
 
    // memset(dp, -1, sizeof(dp));
    // dp.assign(x + 1, -1);
    
    int ans = dp[x];
    if (ans == INF) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }
 
    return 0;
}
