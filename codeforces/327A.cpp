#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int n;
    cin >> n;

    vector<int> a(n);
    int cur = 0, ans = INT_MIN;
    int one = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 1) {
            one++;
        }
        x = (x == 1)? -1 : 1;
        cur += x;
        ans = max(ans, cur);
        if (cur < 0) cur = 0;
    }

    if (one == n) cout << n-1 << endl;
    else cout << ans+one << endl;

    return 0;
}
