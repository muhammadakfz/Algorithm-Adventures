#include <bits/stdc++.h>
using namespace std;

int par[1000005];
int sz[1000005];

void init(int n) {
    for (int i = 0; i <= n; i++) {
        par[i] = i;
        sz[i] = 1;
    }
}

int find(int x) {
    if (par[x] != x) return find(par[x]);
    return par[x]; 
}

int join(int u, int v) {
    int x = find(u);
    int y = find(v);
    if (sz[x] < sz[y]) swap(x, y);

    if (x != y) {
        par[y] = x;
        sz[x] += sz[y];
    }

    return sz[x];
}

int main() {

    int n, m;
    cin >> n >> m;

    int u, v;
    string s;

    init(n);

    while (m--) {
        cin >> s >> u >> v;
        if (s == "union") {
            join(u, v);
        } else if (s == "get") {
            if (find(u) == find(v)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
