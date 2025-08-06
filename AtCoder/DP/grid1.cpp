#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;

signed main() {

    int n, m;
    cin >> n >> m;

    vector<vector<char>> grid(n, vector<char> (m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    vector<vector<int>> dp(n, vector<int>(m, 0));
    
    if (grid[0][0] == '#') {
        cout << 0 << endl;
        return 0;
    }
    
    dp[0][0] = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '#') {
                dp[i][j] = 0;
                continue;
            }
            if (i == 0 && j == 0) continue;
            if (i > 0) dp[i][j] += dp[i-1][j];
            if (j > 0) dp[i][j] += dp[i][j-1];
            dp[i][j] %= MOD;
        }
    }

    cout << dp[n-1][m-1] % MOD << endl;

    return 0;
}