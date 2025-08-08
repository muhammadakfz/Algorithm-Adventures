#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        set<int> set;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] != -1) set.insert(a[i]);
        }

        if (set.empty()) cout << "YES\n";
        else if (set.count(0)) cout << "NO\n";
        else if (set.size() > 1) cout << "NO\n";
        else cout << "YES\n";
    }
    
    return 0;
}