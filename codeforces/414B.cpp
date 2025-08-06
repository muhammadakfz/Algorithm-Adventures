#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e9 + 7;

int dp[2001][2001];

int main() {

    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= n; i++) dp[1][i] = 1;
    for (int i = 2; i <= k; i++) {
        for (int p = 1; p <= n; p++) {
            if (dp[i-1][p] > 0) {
                for (int j = p; j <= n; j += p) {
                    dp[i][j] = (dp[i][j] + dp[i-1][p]) % MAXN;
                }
            }
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = (ans + dp[k][i]) % MAXN;
    }

    cout << ans << endl;
    

    return 0;
}
