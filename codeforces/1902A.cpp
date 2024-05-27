#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORI(i, a, b) for (int i = (a); i <= (b); i++)
#define io_i ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

signed main() {
    io_i;

    int t;
    cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        bool flag = false;
        for (int i = 1; i < n; i++) {
            if(s[i] != s[i-1]) {
                flag = true;
                break;
            }
        }

        int cnt = count(s.begin(), s.end(), '0');
        if(flag or (cnt > n-cnt)) cout << "YES\n";
        else cout << "NO\n";        
    }

    return 0;
}