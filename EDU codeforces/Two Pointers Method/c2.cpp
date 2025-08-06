#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int n, r;
    cin >> n >> r;

    vector<int> d(n);
    for (int i = 0; i < n; i++) {
        cin >> d[i]; 
    }

    int l = 0, h = 0;
    int cnt = 0;

    while (l < n) { 

        while (h < n and d[h] - d[l] <= r) {
            h++;
        }

        if (h == n) {
            break;
        }

        // cout << d[l] << " " << d[h] << endl;
        
        cnt += (n - h);

        l++;
    }

    cout << cnt << endl;

    return 0;
}
