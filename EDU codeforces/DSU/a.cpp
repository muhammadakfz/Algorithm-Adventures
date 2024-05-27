#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORI(i, a, b) for (int i = (a); i <= (b); i++)
#define io_i ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int N = 1e6;

int par[N];

int find(int x) {
    if(par[x] == x) return x;
    return par[x] = find(par[x]);
}

void join(int x, int y) {
    int a = find(x);
    int b = find(y);
    if(a != b) par[b] = a;
}

signed main() {
    io_i;

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) par[i] = i;
    
    while(m--) {
        string s; cin >> s;
        int u, v; cin >> u >> v;
        if(s == "union") join(u, v);
        else {
            if(find(u) == find(v)) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    

    return 0;
}