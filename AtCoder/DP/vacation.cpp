#include <bits/stdc++.h>
#define int long long
using namespace std;

int n;
int dp[100001][3], a[100001][3];

int solve(int i, int j) {
    if(i > n) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    int r = 0;
    for (int k = 0; k < 3; k++) {
        if (k != j) {
            r = max(r, a[i][k] + solve(i + 1, k));
        }
    }
    
   return dp[i][j] = r; 
}


signed main() {

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }

    memset(dp, -1, sizeof(dp));
    cout << solve(1, 0) << endl;

    return 0;
}