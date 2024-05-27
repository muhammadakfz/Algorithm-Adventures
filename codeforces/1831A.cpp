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

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            cout << n+1 - x << " ";
        }

        cout << "\n";
    }

    return 0;
}