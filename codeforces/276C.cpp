#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> bit(n + 2, 0);
    
    auto update = [&](int idx, int val) {
        for (int i = idx; i <= n + 1; i += i & (-i)) {
            bit[i] += val;
        }
    };
    
    auto query = [&](int idx) {
        int sum = 0;
        for (int i = idx; i > 0; i -= i & (-i)) {
            sum += bit[i];
        }
        return sum;
    };
    
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        update(l, 1);
        update(r + 1, -1);
    }
    
    vector<int> freq(n);
    for (int i = 0; i < n; i++) {
        freq[i] = query(i + 1);
    }
    
    sort(a.rbegin(), a.rend());
    sort(freq.rbegin(), freq.rend());
    
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += a[i] * freq[i];
    }
    
    cout << ans << endl;
    
    return 0;
}
