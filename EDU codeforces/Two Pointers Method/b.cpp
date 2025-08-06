#include <bits/stdc++.h>
#define int long long 
using namespace std;

signed main() {

    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    vector<int> ans(m, 0);
    int cnt = 0;
    for (int i = 0; i < m; i++) {
        while (cnt < n and a[cnt] < b[i]) {
            cnt++;
        }

        ans[i] = cnt;
    }

    for (int i = 0; i < m; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
