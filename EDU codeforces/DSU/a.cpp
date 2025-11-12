#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> par, sz;

int find(int x) {
    if(par[x] != x) par[x] = find(par[x]);
    return par[x];
}

void union_sets(int x, int y) {
    int root_x = find(x);
    int root_y = find(y);
    if(root_x != root_y) {
        if(sz[root_x] < sz[root_y]) swap(root_x, root_y);
        par[root_y] = root_x;
        sz[root_x] += sz[root_y];
    }
}

signed main() {

    int n, m;
    cin >> n >> m;

    par.resize(n + 1);
    sz.resize(n+1, 1);

    iota(par.begin(), par.end(), 0);

    for (int i = 0; i < m; i++) {
        string s;
        int u, v;
        cin >> s >> u >> v;
        if(s == "union") {
            union_sets(u, v);
        }

        if(s == "get") {
            cout << (find(u) == find(v) ? "YES" : "NO") << endl;
        }
    }

    return 0;
}
