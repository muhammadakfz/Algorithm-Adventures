#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {

    int n;
    cin >> n;

    vector<int> score(n);
    int sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> score[i];
        sum += score[i];
    }

    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int i = n-1; i >= 0; i--) {
        for (int j = i; j < n; j++) {
            if(i == j) dp[i][j] = score[i];
            else {
                dp[i][j] = max(score[i] - dp[i+1][j], score[j] - dp[i][j-1]);
            }
        }
    }

    cout << (dp[0][n-1]+sum)/2 << endl;

    return 0;
}