#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int n; cin >> n;
    vector<int> v(n);

    int mn = 1e9;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mn = min(mn, v[i]);
    }

    cout << mn+1 << endl;



    return 0;
}