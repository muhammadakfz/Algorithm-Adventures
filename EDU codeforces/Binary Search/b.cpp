#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int n, k;
    cin >> n >> k;

    vector<int> a(n+1), b(k+1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= k; i++) cin >> b[i];

    for (int i = 1; i <= k; i++) {
        int l = 1, r = n, ans = 0;
        while (l <= r) {
            int mid = (l+r)/2;
            if (a[mid] <= b[i]) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
