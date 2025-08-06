#include <bits/stdc++.h>
#define int long long
using namespace std;

const int INF = 7490;

int coins[] = {1, 5, 10, 25, 50};
int dp[INF];

signed main() {


    int x;

    dp[0] = 1;
    for (auto& c: coins) {
        for (int i = c; i < INF; i++) {
            dp[i] += dp[i - c];
        }
    }

    while (cin >> x) {
        cout << dp[x] << endl;
    }

    // memset(dp, -1, sizeof(dp));

    
    return 0;
}
