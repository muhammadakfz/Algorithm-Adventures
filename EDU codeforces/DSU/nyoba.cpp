#include <bits/stdc++.h>
using namespace std;

vector<int> par, sz;

int find(int x) {
    if (par[x] == x) return x;
    return par[x] = find(par[x]);
}

void union_set(int x, int y) {
    x = find(x);
    y = find(y);
    if (x != y) {
        if (sz[x] < sz[y]) swap(x, y);
        par[y] = x;
        sz[x] += sz[y];
    }
}

int main() {

    int n, m;
    cin >> n >> m;

    par.resize(n + 1);
    sz.resize(n + 1, 1);
    iota(par.begin(), par.end(), 0);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        union_set(u, v);
    }

    unordered_map<int, vector<int>> mp;
    for (int i = 1; i <= n; i++) {
        mp[find(i)].push_back(i);
    }

    for (auto &p : mp) {
        cout << "Component with root " << p.first << ": ";
        for (int x : p.second) {
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}
