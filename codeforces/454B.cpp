#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int cnt = 0, ans = 0;
    for (int i = 0; i < n-1; i++) {
        if (a[i] > a[i+1]) {
            cnt++;
            ans = i;
        }
    }

    if (cnt == 0) cout << "0\n";
    else if (cnt > 1) {
        cout << "-1\n";
        return 0;
    } else {
        if (a[n-1] <= a[0]) cout << n - ans - 1 << endl;
        else cout << "-1\n";
    }

    return 0;
}
