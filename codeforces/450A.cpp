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

    double n, m;
    cin >> n >> m;

    map<int, double> mp;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        mp[i] = ceil(x/m);
    }

    int mx = 0, mxx = 1;
    for (int i = 1; i <= n; i++) {
        if(mp[i] >= mx) {
            mx = mp[i];
            mxx = i;
        }
    }         

    cout << mxx << endl;

    return 0;
}