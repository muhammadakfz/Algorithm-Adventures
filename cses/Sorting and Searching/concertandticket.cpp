#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    vector<int> h(n), t(m);
    for (int i = 0; i < n; i++) cin >> h[i];
    for (int i = 0; i < m; i++) cin >> t[i];

    int ticket = -1;
    sort(h.begin(), h.end());
    for (int i = 0; i < m; i++) {
        auto it = upper_bound(h.begin(), h.end(), t[i]);
        if (it == h.begin()) {
            cout << -1 << endl;
        } else {
            cout << *(--it) << endl;
            h.erase(it);
        }
    }

    return 0;
}