#include <bits/stdc++.h>
using namespace std;

int dp[10001];
int coins[] = {1, 3, 4};

int solve(int x) {
    if (x < 0) return INT_MAX;
    if (x == 0) return 0;
    if (dp[x] != -1) return dp[x];

    int ans = INT_MAX;
    dp[x] = solve(x - coins[0]) + solve(x - coins[1]) + solve(x - coins[2]);
    if (ans == INT_MAX) ans = -1;
    return dp[x] = ans;
}

int main() {

    int x;
    cin >> x;

    memset(dp, -1, sizeof(dp));

    cout << solve(x) << endl;


    return 0;
}
