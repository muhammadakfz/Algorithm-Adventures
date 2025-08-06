sinclude <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    string s;
    cin >> s;

    int n = s.size();
    vector<int> dp(n + 1, 0);
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            dp[i] = dp[i - 1] + 1;
        } else {
            dp[i] = dp[i - 1];
        }
    }

    int m; cin >> m;
    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        l--; r--;
        cout << dp[r] - dp[l] << endl;
    }
    return 0;
}
