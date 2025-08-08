#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    vector<int> coins(n);

    int maxx = 0;
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
        maxx += coins[i];
    }

    vector<bool> dp(maxx + 1, false);
    dp[0] = true;
    
    for (int i = 0; i < n; i++) {
        for (int j = maxx; j >= coins[i]; j--) {
            dp[j] = dp[j] || dp[j - coins[i]];
        }
    }

    int cnt = 0;
    for (int i = 1; i <= maxx; i++) {
        if (dp[i]) {
            cnt++;
        }
    }
    
    cout << cnt << endl;
    for (int i = 1; i <= maxx; i++) {
        if (dp[i]) {
            cout << i << " ";
        }
    }

    return 0;
}