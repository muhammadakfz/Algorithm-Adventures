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
    
    int n, m;
    vector<int> a, b, c;
    cin >> n >> m;

    a.resize(n);
    b.resize(m);
    c.resize(n+m);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    int i = 0, j = 0, k = 0;
    while(i < a.size() and j < b.size()) {
        if(a[i] < b[j]) c[k++] = a[i++];
        else c[k++] = b[j++];
    }

    while(i < a.size()) c[k++] = a[i++];
    while(j < b.size()) c[k++] = b[j++];

    for(auto i: c) cout << i << " "; 

    return 0;
}