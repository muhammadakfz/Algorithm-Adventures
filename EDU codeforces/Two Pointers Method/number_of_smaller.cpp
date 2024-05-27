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

    int n, m; cin >> n >> m;
    vector<int> a(n), b(m), c(m);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    int i = 0;
    for (int j = 0; j < m; j++) {
        while(i < n and a[i] < b[j]) i++;
        cout << i << "\n";
        c[j] = i;
    }
    
    for(auto p: c) cout << p << " ";

    return 0;
}