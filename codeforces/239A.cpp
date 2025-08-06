#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int y, k, n;
    cin >> y >> k >> n;

    if (y == n || y < 0 || n <= 0 || k <= 0) {
        cout << -1 << endl;
        return 0;
    } else {
        int a = ((y + k)/k) * k;
        vector<int> res;
        for (int i = a; i <= n;) {
            if (i % k == 0) {
                res.push_back(i-y);
                i+= k;
                continue;
            }
            i++;
        }

        if(res.empty()) cout << -1 << endl;
        else {
            for (auto i: res) {
                cout << i << " ";
            }
        }
    }

    return 0;
}
