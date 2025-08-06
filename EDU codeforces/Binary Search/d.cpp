#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int t;
    cin >> t;
    while(t--) {
        int l, r;
        cin >> l >> r;
        cout << upper_bound(a.begin(), a.end(), r) - lower_bound(a.begin(), a.end(), l) << endl;
    }


    return 0;
}
