#include <bits/stdc++.h>
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORI(i, a, b) for (int i = (a); i <= (b); i++)
#define io_i ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

signed main() {
    io_i;

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        int odd = 0;

        for(char i: s) {
            if(i%2 == 1) odd++;
        }

        if(odd <= 1) cout << -1 << endl;
        else {
            int cnt = 0;
            for (int i = 0; i < n; i++) {
                if((s[i]-'0')%2 == 1) {
                    cout << s[i];
                    cnt++;
                }
                if(cnt == 2) break;
            }
            cout << endl;
        }
    }

    return 0;
}