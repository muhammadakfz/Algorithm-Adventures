#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;

signed main() {
    
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    vector<int> v = a;

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    
    int m = v.size();
    vector<int> dp(m + 1, 0);
    
    int ans = 0;
    
    for (int i = 0; i < n; i++) {
        int pos = lower_bound(v.begin(), v.end(), a[i]) - v.begin() + 1;
        
        int prev = 0;
        for (int j = pos - 1; j > 0; j -= j & (-j)) {
            prev = (prev + dp[j]) % MOD;
        }
        
        int curr = (prev + 1) % MOD;
        
        ans = (ans + curr) % MOD;
        
        for (int j = pos; j <= m; j += j & (-j)) {
            dp[j] = (dp[j] + curr) % MOD;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}