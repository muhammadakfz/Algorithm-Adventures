#include <bits/stdc++.h>
#include <climits>
#define int long long
using namespace std;

const int MOD = 26101991;

int a[101];
int dp[101][101], dp2[101][101], dp3[101];

int f(int l, int r) {
    if (l == r) return 0;
    if (dp[l][r] != -1) return dp[l][r];
    if (l == r-1) return dp[l][r] = a[l] * a[r] * a[r+1];
    else {
        int ans = LLONG_MAX;;
        for (int i = l; i < r; i++) {
            ans = min(ans, f(l, i) + f(i + 1, r) + a[l] * a[i + 1] * a[r + 1]);
        }
        return dp[l][r] = ans;
    }
}

int f2(int l, int r) {
    if(l == r) return 1;
    if(dp2[l][r] != -1) return dp2[l][r];
    int ans = 0;
    for (int i = l; i < r; i++) {
        int tmp = f(l, i) + f(i + 1, r) + a[l] * a[i + 1] * a[r + 1];
        if (tmp == f(l, r)) {
            ans += f2(l, i) * f2(i + 1, r) % MOD;
            ans %= MOD;
        }
    }

    return dp2[l][r] = ans;
}

int f3(int l, int r) {
    dp3[0] = 1;
    dp3[1] = 1;
    for (int i = 2; i <= r; i++) {
        dp3[i] = 0;
        for (int j = 0; j < i; j++) {
            dp3[i] += dp3[j] * dp3[i - j - 1];
            dp3[i] %= MOD;
        }
    }

    return dp3[r];
}
    

signed main() {

    memset(dp, -1, sizeof(dp));
    memset(dp2, -1, sizeof(dp2));

    int n;
    cin >> n;
    for (int i = 0; i <= n; i++) cin >> a[i];

    int q;
    cin >> q;
    if (q == 1) cout << f(0, n-1) << endl;
    if (q == 2) cout << f2(0, n-1) << endl;
    if (q == 3) cout << f3(0, n-1) << endl;

    return 0;
}
