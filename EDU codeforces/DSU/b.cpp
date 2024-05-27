#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORI(i, a, b) for (int i = (a); i <= (b); i++)
#define io_i ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int N = 3000001;

vector<int> par, siz, mn, mx; 

int find(int x) {
    if(par[x] == x) return x;
    return par[x] = find(par[x]);
}

void merge(int x, int y) {
    int a = find(x);
    int b = find(y);
    if(a != b) {
        if(siz[a] > siz[b]) swap(a, b);
        par[b] = a;
        siz[a] += siz[b];
        mn[a] = min(mn[a], mn[b]);
        mx[a] = max(mx[a], mx[b]);
    }
}

signed main() {
    io_i;

    int n, m;
    cin >> n >> m;

    par.resize(n + 1);
    mn.resize(n + 1);
    mx.resize(n + 1);
    siz.assign(n + 1, 1);

    FORI(i, 1, n) {
        par[i] = i;
        mn[i] = i;
        mx[i] = i;
    }

    while(m--) {
        string s; cin >> s;
        int u, v; cin >> u;
        if(s == "union") {
            cin >> v;
            merge(u, v);
        } else {
            int x = find(u);
            cout << mn[x] << " " << mx[x] << " " << siz[x] << "\n";
        }
    }
    

    return 0;
}