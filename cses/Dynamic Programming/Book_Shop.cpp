#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, x;
    cin >> n >> x;

    vector<int> h(n+1), s(n+1);
    // h is price and s is pages
    

    for (int i = 1; i <= n; i++) cin >> h[i];
    for (int i = 1; i <= n; i++) cin >> s[i];
    vector<vector<int>> dp(n+1, vector<int> (x+1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= x; j++) {
            int best = dp[i-1][j];
            if (j >= h[i]) best = max(best, dp[i-1][j-h[i]] + s[i]);
            dp[i][j] = best;
        }
    }

    cout << dp[n][x] << endl;

    return 0;
}
