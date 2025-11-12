#include <bits/stdc++.h>
using namespace std;

vector<int> par, sz;

int find(int x) {
    if(par[x] != x) par[x] = find(par[x]);
    return par[x];
}

void union_sets(int a, int b) {
    int u = find(a);
    int v = find(b);
    if (sz[u] < sz[v]) swap(u, v);
    if (u != v) {
        par[v] = u;
        sz[u] += sz[v];
    }
}

int main() {

    int n, m;
    cin >> n >> m;

    par.resize(n+1);
    sz.resize(n+1, 1);

    iota(par.begin(), par.end(), 0);
    for (int i = 0; i < m; i++) {
        int s, a, b;
        cin >> s >> a >> b;
        if (s == 1) {
            union_sets(a, b);
        } else {
            cout << (find(a) == find(b) ? "Y" : "T") << endl;
        }
    }

    return 0;
}
