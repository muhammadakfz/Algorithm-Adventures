#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;

signed main() {

    int n;
    cin >> n;

    int sum = (n * (n + 1)) / 2;
    
    if(sum % 2 != 0) {
        cout << 0 << endl;
        return 0;
    }

    int target = sum / 2;
    vector<int> dp(target+1);
    dp[0] = 1;

    for (int i = 1; i < n; i++) {
        for (int j = target; j >= i; j--) {
            dp[j] = (dp[j] + dp[j - i]) % MOD;
        }
    }

    int ans = dp[target] % MOD;
    cout << ans << endl;

    return 0;
}