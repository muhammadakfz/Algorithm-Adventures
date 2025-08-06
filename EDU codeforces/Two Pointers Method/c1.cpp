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
        while (sum > s) {
            sum -= a[l];
            l++;
        }

        ans += (r - l + 1);
        r++;
    }

    cout << ans << endl;

    return 0;
}

