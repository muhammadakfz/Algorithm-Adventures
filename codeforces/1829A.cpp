#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int tmp = 0, ans = 0;
        vector<int> v(n);

        for (int i = 0; i < n; i++) cin >> v[i];
        for (int i = 0; i < n; i++) {
            if (v[i] == 1) {
                tmp = 0;
                ans = max(ans, tmp);
            } else {
                tmp++;
                ans = max(ans, tmp);
            }
        }

        cout << ans << endl;
    }

    return 0;
}