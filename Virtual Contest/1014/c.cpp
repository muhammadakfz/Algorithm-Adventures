#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int b = 0, odd = 0, even = 0;

        vector<int> a, tmp;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            b += x;
            if (x % 2 == 0) {
                a.push_back(x);
                even++;
            } else {
                odd++;
                tmp.push_back(x);
            }
        }

        if (n == 1) {
            cout << b << endl;
            continue;
        }

        if (odd == 0) {
            cout << *max_element(a.begin(), a.end()) << endl;
            continue;
        }

        if (a.empty()) {
            cout << *max_element(tmp.begin(), tmp.end()) << endl;
            continue;
        }

        if (a.size() == 1 and tmp.size() == 1) {
            cout << a[0] + tmp[0] << endl;
            continue;
        } 

        cout << b - odd + 1 << endl;

    }

    return 0;
}
