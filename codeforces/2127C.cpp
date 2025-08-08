#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
using namespace std;

signed main() {
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        int sum = 0;

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        vector<pair<int,int>> val(n);

        for (int i = 0; i < n; i++) {
            sum += abs(a[i] - b[i]);
            val[i] = {min(a[i], b[i]), max(a[i], b[i])};
        }

        sort(all(val));

        vector<pair<int,int>> part;
        if (n > 0) {
            part.pb(val[0]);
            for (int i = 1; i < n; i++) {
                if (val[i].first <= part.back().second) {
                    part.back().second = max(part.back().second, val[i].second);
                } else part.pb(val[i]);
            }
        }

        int len = part.size();
        int cur = n -len;

        if (k <= cur) {
            cout << sum << endl;
            continue;
        }

        vector<int> selisih;
        for (int i = 1; i < len; i++) {
            int gap = part[i].first - part[i - 1].second;
            selisih.pb(gap);
        }

        sort(all(selisih));

        int total = 0;
        int kurang = k - cur;

        int mn = min((int)selisih.size(), kurang);

        for (int i = 0; i < mn; i++) {
            total += 2 * selisih[i];
        }

        int ans = sum + total;

        cout << ans << endl;
    }
    return 0;
}
