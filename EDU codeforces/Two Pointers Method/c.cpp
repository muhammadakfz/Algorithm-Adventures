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
    
    int cnt = 0, i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] == b[j]) {
            int val = a[i];
            int tmp1 = 0, tmp2 = 0;
            while (j < m && b[j] == val) {
                j++;
                tmp1++;
               // cout << "i: " << i << ", j: " << j << ", cnt: " << cnt << endl;

            }

            while (i < n && a[i] == val) {
                i++;
                tmp2++;
               // cout << "i: " << i << ", j: " << j << ", cnt: " << cnt << endl;
            }

            cnt += min(tmp1, tmp2);
        } else if (a[i] < b[j]) {
            i++;
        } else {
            j++;
        }

    }
    
    cout << cnt << endl;

    return 0;
}
