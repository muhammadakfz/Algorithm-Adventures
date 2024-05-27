#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fi first
#define se second
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORI(i, a, b) for (int i = (a); i <= (b); i++)
#define io_i ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

signed main() {
    io_i;
    
    int n; cin >> n;
    int cnt = 0;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        v[i] = {a, b};
    }

    for (int i = 0; i < n; i++) {
        bool f = false;
        for (int j = 0; j < n; j++) {
            if(j == i) continue;
            if(v[i].fi == v[j].se) f = true;
        } if(!f) cnt++;
    }
        
    cout << cnt;

    return 0;
}