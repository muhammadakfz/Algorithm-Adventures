#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int n, p;
    cin >> n >> p;

    vector<int> a(n);
    int total = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }

    vector<int> b = a;
    for (int i = 0; i < n; i++) {
        b.push_back(a[i]);
    }

    //for (int i = 0; i < 2*n; i++) {
    //    cout << b[i] << " ";
    //}

    // cout << endl;

    int ans = INT_MAX;
    int l = 0, r = 0, len = 0, sum = 0;
    int ans_len = LLONG_MAX, pos = -1;

    while (r < n*2) {
        sum += b[r];
        len++;

        while (sum >= p and l < n) {
            if (len < ans_len) {
                ans_len = len;
                pos = l + 1;
            }

            sum -= b[l];
            len--;
            l++;
        }

        r++;
    }

    // if (pos > 0) {
    //    cout << pos << " " << ans_len << endl;
    //    return 0;
    // }

    l = 0, r = n;
    sum = 0;
    len = 0;
    // ans_len = LLONG_MAX;
    // pos = -1;

    for (int i = 0; i < n; i++) {
        int cur = 0;
        for (int j = 0; j < n; j++) {
            cur += a[(i+j) % n];

            int kurang_berapa = p - cur;
            if (kurang_berapa <= 0) len = j+1;
            else {
                int putaran = (kurang_berapa + total - 1) / total;
                len = j + 1 + putaran * n;
            }

            if (len < ans_len) {
                ans_len = len;
                pos = i + 1;
            }
        }
    }

    cout << pos << " " << ans_len << endl;

    return 0;
}
