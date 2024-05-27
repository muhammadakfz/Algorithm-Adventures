#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int n, d;
    cin >> n >> d;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v[i].first = a;
        v[i].second = b;
    }

    sort(v.begin(), v.end());
    int ans = 0;

    for (int i = 0; i < n; i++) {
        if(v[i].first <= d/v[i].second) {
            d -= v[i].first * v[i].second;
            ans += v[i].second;
        } else {
            int tmp = d/v[i].first;
            ans += tmp;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}