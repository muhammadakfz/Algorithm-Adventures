#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;

map<int, vector<int>> mp;

void next(int idx, int n, int p, int q) {
    if(idx == n) {
        mp[q].push_back(p);
        return;
    }

    if(((1 << idx) & p) != 0) {
        next(idx + 1, n, p, q);
        return;
    }

    if((idx < n - 1) and ((1 << (idx + 1)) & p) == 0) {
        next(idx + 2, n, p, q);
    }

    q = q | (1 << idx);
    next(idx + 1, n, p, q);
}

signed main() {

    int n, m;
    cin >> n >> m;

    int batas = 1 << n;

    for (int i = 0; i < batas; i++) {
        next(0, n, i, 0);
    }

    vector<int> baris(batas, 0);
    vector<int> dp(batas, 0);

    baris[0] = 1;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < batas; j++) {
            for (auto k: mp[j]) {
                dp[j] = (dp[j] + baris[k]) % MOD;
            }
        }
        swap(baris, dp);
        fill(dp.begin(), dp.end(), 0);
    }

    cout << baris[0] << endl;

    return 0;
}