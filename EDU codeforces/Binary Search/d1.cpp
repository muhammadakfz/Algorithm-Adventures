#include <bits/stdc++.h>
#define int long long
using namespace std;

int m, n;
vector<int> t, y, z;

int balloons(int t, int z, int y, int x) {
    int cycle_time = z * t + y;
    int full_cycles = x / cycle_time;
    int rem_time = x % cycle_time;
    int extra = min(rem_time / t, z);
    return full_cycles * z + extra;
}

bool f(int x) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += balloons(t[i], z[i], y[i], x);
    }
    return sum >= m;
}

signed main() {

    cin >> m >> n;

    t.resize(n);
    y.resize(n);
    z.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> t[i] >> z[i] >> y[i];
    }

    int l = -1, r = 1e9;
    while (l + 1 < r) {
        int mid = (l+r)/2;
        if (f(mid)) {
            r = mid;
        } else {
            l = mid;
        }
    }

    cout << r << endl;

    vector<int> cnt(n, 0);
    for (int i = 0; i < n; i++) {
        cnt[i] = balloons(t[i], z[i], y[i], r);
    }

    int total = 0;
    for (int i = 0; i < n; i++) {
        if (total + cnt[i] <= m) {
            cout << cnt[i] << " ";
            total += cnt[i];
        } else {
            if (total == m) {
                cout << 0 << " ";
            } else {
                cout << m - total << " ";
                total = m;
            }
        }
    }


    return 0;
}
