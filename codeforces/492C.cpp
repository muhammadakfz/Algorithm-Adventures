#include <bits/stdc++.h>
#define int long long
using namespace std;

bool cmp (pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

signed main() {

    int n, r, avg;
    cin >> n >> r >> avg;

    vector<pair<int, int>> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
        sum += a[i].first;
    }

    int target = n * avg;
    if (sum >= target) {
        cout << 0 << endl;
        return 0;
    } else {
        sort(a.begin(), a.end(), cmp);
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (sum >= target) break;
            int butuh = target - sum;
            int bisa = r - a[i].first;
            if (bisa <= 0) continue;
            int tambah = min(bisa, butuh);
            sum += tambah;
            ans += tambah * a[i].second;
        }

        cout << ans << endl;
    }



    return 0;
}
