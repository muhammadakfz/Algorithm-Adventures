#include <bits/stdc++.h>
using namespace std;

vector<int> par, sz;

int find(int a) {
    if (par[a] == a) return a;
    return par[a] = find(par[a]);
}

void union_set(int a, int b) {
    a = find(a);
    b = find(b);
    if (a != b) {
        if (sz[a] < sz[b]) swap(a, b);
        par[b] = a;
        sz[a] += sz[b];
    }
}

int main() {

    int n, m;
    cin >> n >> m;

    par.resize(n + 1);
    sz.resize(n + 1, 1);
    iota(par.begin(), par.end(), 0);

    vector<pair<int, int>> edges(m);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        edges[i] = {u, v};
        union_set(u, v);
    }

    set<int> components;
    for (int i = 1; i <= n; i++) {
        components.insert(find(i));
    }

    vector<int> reps(components.begin(), components.end());
    cout << components.size() - 1 << "\n";
    for (size_t i = 1; i < reps.size(); i++) {
        cout << reps[i - 1] << " " << reps[i] << "\n";
    }

    return 0;
}
