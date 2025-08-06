#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int n, s;
    cin >> n >> s;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int l = 0, r = 0, sum = 0, ans = 0;
    while (r < n) {
        sum += a[r];

        while (sum >= s and l <= r) {
            ans += n - r;
            sum -= a[l];
            l++;
        }

        r++;
    }

    cout << ans << endl;

    return 0;
}
