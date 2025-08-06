#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n, m;
    cin >> n >> m;

    vector<int> w(n+1), v(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
    }

    vector<vector<int>> dp(n+1, vector<int> (m+1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            int best = dp[i-1][j];
            if(j >= w[i]) {
                best = max(best, dp[i-1][j-w[i]] + v[i]);
            }
            dp[i][j] = best;
        }
    }

    cout << dp[n][m] << endl;
}