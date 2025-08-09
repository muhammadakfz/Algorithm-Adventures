#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> dp;
    for (auto i: a) {
        auto it = lower_bound(dp.begin(), dp.end(), i);
        if (it == dp.end()) {
            dp.push_back(i);
        } else {
            *it = i;
        }
    }

    cout << dp.size() << endl;
    // for (int i = 0; i < n; i++) {
    //     dp[i] = 1;
    //     for (int j = 0; j < i; j++) {
    //         if (a[j] < a[i]) {
    //             dp[i] = max(dp[i], dp[j] + 1);
    //         }
    //     }
    // }

    // cout << *max_element(dp.begin(), dp.end()) << endl;

    return 0;
}
