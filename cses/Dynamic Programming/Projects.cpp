#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int n;
    cin >> n;

    vector<tuple<int, int, int>> projects(n);
    for (int i = 0; i < n; i++) {
        int a, b, p;
        cin >> a >> b >> p;
        projects[i] = make_tuple(b, a, p);
    }

    sort(projects.begin(), projects.end());

    int ans = 0;
    map<int, int> dp;
    dp[0] = 0;

    for (auto i: projects) {
        int a, b, p;
        tie(b, a, p) = i;

        auto it = dp.lower_bound(a);
        it--;

        int hadiah = it->second + p;
        ans = max(ans, hadiah);
        dp[b] = ans;
    }

    cout << ans << endl;

    return 0;
}