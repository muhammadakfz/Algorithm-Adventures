#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int l = 0, r = 0, ans = 0;
    multiset<int> ms;

    while (r < n) {
        ms.insert(a[r]);
        while (!ms.empty() && *ms.rbegin() - *ms.begin() > k) {
            ms.erase(ms.find(a[l]));
            l++;
        }

        ans += (r - l + 1);
        r++;
    }

    cout << ans << endl;

    return 0;
}
