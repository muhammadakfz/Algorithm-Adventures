#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, d;
    cin >> n >> d;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int ans = 0;
    int j = 0;

    for (int i = 0; i < n; i++) {
        while (a[i] - a[j] > d) {
            j++;
        }

        int cnt = i - j;

        if (cnt >= 2) {
            ans += (cnt * (cnt - 1)) / 2;
        }
    }

    cout << ans << endl;

    return 0;
}
