#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MAXN = 1e5;

signed main() {

    int n;
    cin >> n;

    vector<int> a(MAXN+1, 0);
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        a[x] += x;
    }

    vector<int> dp(MAXN+1, 0);

    dp[0] = 0;
    dp[1] = a[1];
    for (int i = 2; i <= MAXN; ++i) {
        dp[i] = max(dp[i - 1], dp[i - 2] + a[i]);
    }

    cout << dp[MAXN] << endl;

    return 0;
}
