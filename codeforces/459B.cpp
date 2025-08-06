#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int n;
    cin >> n;

    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    sort(b.begin(), b.end());
    int max_diff = b[n-1] - b[0];

    int cnt1 = 0, cnt2 = 0; 
    for (int i = 0; i < n; i++) {
        if (b[i] == b[0]) {
            cnt1++;
        }
        if (b[i] == b[n-1]) {
            cnt2++;
        }
    }

    cout << max_diff << " ";

    if (max_diff == 0) {
        cout << (n * (n - 1)) / 2 << endl;
    } else {
        cout << cnt1 * cnt2 << endl;
    }

    // cout << max_diff << " ";
    
    
    // cout << cnt << endl;

    return 0;
}
