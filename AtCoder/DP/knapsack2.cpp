#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n, W;
    cin >> n >> W;

    vector<int> w(n+1, 0), v(n+1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
    }

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += v[i];
    }
    
    vector<int> dp(sum+1, LLONG_MAX);
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = sum; j >= v[i]; j--) {
            if (dp[j-v[i]] != LLONG_MAX) dp[j] = min(dp[j], dp[j-v[i]] + w[i]);
        }
    }

    int ans = 0;
    for (int i = sum; i >= 0; i--) {
        if(dp[i] <= W) {
            ans = i;
            break;
        }
    }

    cout << ans << endl;
}