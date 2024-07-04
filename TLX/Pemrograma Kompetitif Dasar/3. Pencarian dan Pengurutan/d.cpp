#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int m; cin >> m;
    while(m--) {
        int l, r; cin >> l >> r;
        int start = upper_bound(v.begin(), v.end(), l) - v.begin();
        int end = upper_bound(v.begin(), v.end(), r) - v.begin();
        cout << end - start << endl;
    }

    return 0;
}