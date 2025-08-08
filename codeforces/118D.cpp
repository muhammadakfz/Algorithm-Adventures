#include <bits/stdc++.h>
#define int int
using namespace std;

// rejudge

const int MOD = 100000000;
int n1, n2, k1, k2;
int memo[101][101][2];
bool visited[101][101][2];

int dp(int footmen, int horsemen, int last) {
    if (footmen == 0 && horsemen == 0) return 1;
    if (footmen < 0 || horsemen < 0) return 0;
    if (visited[footmen][horsemen][last]) return memo[footmen][horsemen][last];
    
    visited[footmen][horsemen][last] = true;
    int result = 0;
    
    if (last == 0) {
        for (int cnt = 1; cnt <= min(k2, horsemen); cnt++) {
            result = (result + dp(footmen, horsemen - cnt, 1)) % MOD;
        }
    } else {
        for (int cnt = 1; cnt <= min(k1, footmen); cnt++) {
            result = (result + dp(footmen - cnt, horsemen, 0)) % MOD;
        }
    }
    
    return memo[footmen][horsemen][last] = result;
}

signed main() {
    cin >> n1 >> n2 >> k1 >> k2;
    
    memset(visited, false, sizeof(visited));
    
    int ans = 0;
    
    for (int cnt = 1; cnt <= min(k1, n1); cnt++) {
        ans = (ans + dp(n1 - cnt, n2, 0)) % MOD;
    }
    
    for (int cnt = 1; cnt <= min(k2, n2); cnt++) {
        ans = (ans + dp(n1, n2 - cnt, 1)) % MOD;
    }
    
    cout << ans << endl;
    
    return 0;
}
