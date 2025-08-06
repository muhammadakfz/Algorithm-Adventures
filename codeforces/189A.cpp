#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    int a[3];
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }

    sort(a, a+3);
    vector<int> dp(n + 1, INT_MIN);

    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        for (auto x: a) {
            if (i - x >= 0) {
                dp[i] = max(dp[i], dp[i - x] + 1);
            }

            // cout << i << " " << x << " " << dp[i] << endl;
        }
    }

    cout << dp[n] << endl;

    return 0;
}
