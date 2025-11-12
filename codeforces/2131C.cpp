#include <bits/stdc++.h>
#define int long long 
using namespace std;

int f(int x, int k) {
    if (k == 0) return x; 
    int r = x % k;
    return min(r, k - r);
}

signed main() {

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        unordered_map<int, int> s, t;
        
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            s[f(x, k)]++;
        }

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            t[f(x, k)]++;
        }

        cout << (s == t ? "YES" : "NO") << endl;
    }
    return 0;
}