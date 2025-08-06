#include <bits/stdc++.h>
using namespace std;

int n, k;
int dp[100001];
vector<int> a;

int solve(int i) {
    if (i == 0) return 0;
    if (dp[i] != -1) return dp[i];
    if (i == 1) return abs(a[1] - a[0]);
    else {
        int ans = INT_MAX;
        for (int j = 1; j <= k and j <= i; j++) {
            ans = min(ans, solve(i - j) + abs(a[i] - a[i-j]));
        }

        return dp[i] = ans;
    }
}

int main() {

    cin >> n >> k;

    memset(dp, -1, sizeof(dp));
    a.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << solve(n - 1) << endl;

    return 0;
}
