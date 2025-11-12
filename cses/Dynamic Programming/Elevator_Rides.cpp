#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, x;
    cin >> n >> x;

    vector<int> h(n);
    for (int i = 0; i < n; i++) cin >> h[i];

    int batas = 1 << n;

    vector<pair<int, int>> dp(batas);
    dp[0] = {1, 0};

    for (int i = 1; i < batas; i++) {
        pair<int, int> best = {INT_MAX, INT_MAX};
        for (int j = 0; j < n; j++) {
            if ((i & (1 << j)) == 0) continue;
            auto cur = dp[i ^ (1 << j)];
            if (cur.second + h[j] <= x) {
                cur.second += h[j];
            } else {
                cur.first++;
                cur.second = h[j];
            }

            best = min(best, cur);
        }

        dp[i] = best;
    }

    cout << dp[batas-1].first << endl;

    return 0;
}