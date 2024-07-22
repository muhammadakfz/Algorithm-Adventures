#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> a;
vector<int> dp(50001, -1);
int n;

int solve(int x) {
    if(x == 0) return 0;
    else if(x < 0) return INT_MAX;
    else if(dp[x] > -1) return dp[x];
    else {
        int ans = INT_MAX;
        for(int i = 0; i < n; i++) ans = min(ans, solve(x - a[i]) + 1); 
        return dp[x] = ans;
    }
}

signed main() {
    cin >> n;
    a.resize(n); 
    for (int i = 0; i < n; i++) cin >> a[i];

    int k; cin >> k;
    int ans = solve(k);
    cout << (ans == INT_MAX ? -1 : ans) << endl;

    return 0;
}