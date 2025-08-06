#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;

signed main() {

    int n, m;
    cin >> n >> m;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<vector<int>> dp(n+1, vector<int>(m+2));

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            if (a[i] == 0) {
                for (int j = 1; j <= m; j++) {
                    dp[i][j] = 1;
                }
            } else {
                dp[i][a[i]] = 1;
            }
        } else {
            if (a[i] == 0) {
                for (int j = 1; j <= m; j++) {
                    dp[i][j] = (dp[i-1][j-1] + dp[i-1][j] + dp[i-1][j+1]) % MOD;
                }
            } else {
                dp[i][a[i]] = (dp[i-1][a[i]-1] + dp[i-1][a[i]] + dp[i-1][a[i]+1]) % MOD;
            }
        }
    }

    int ans = 0;
    for (int j = 1; j <= m; j++) {
        ans = (ans + dp[n-1][j]) % MOD;
    }

    cout << ans << endl;
    /* 
    2 0 2

    2 1 2
    2 2 2
    2 3 2


    4 5

    0 0 2 4
   
    1 0 2 4
    2 0 2 4
    3 0 2 4
    4 0 2 4
    5 0 2 4

    1 1 2 4
    2 1 2 4
    */


    return 0;
}
