#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        vector<int> pref(n+1, 0);
        for (int i = 0; i < n; i++) {
            pref[i+1] = pref[i] + a[i];
        }

        int ans = 0;
        for (int i = 0; i <= n - k; i++) {
            if (pref[i + k] - pref[i] == 0) {
                ans++;
                i += k;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
