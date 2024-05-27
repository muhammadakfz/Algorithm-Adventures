#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        map<char, bool> m;

        bool ans = 1;
        for (int i = 0; i < n; i++) {
            if(m.count(s[i])) {
                ans = 0;
                break;
            }

            m[s[i]] = 1;
            while(s[i] == s[i+1] and i + 1 < n) i++;
        }

        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}