#include <bits/stdc++.h>
using namespace std;

vector<int> par, sz;

int find(int x) {
    if (par[x] != x) par[x] = find(par[x]);
    return par[x];
}

void union_sets(int a, int b) {
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
    sz.resize(n+1, 1);

    iota(par.begin(), par.end(), 0);
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        union_sets(a, b);
    }

    set<int> unique_par;
    for (int i = 1; i <= n; ++i) {
        unique_par.insert(find(i));
    }

    cout << unique_par.size() << endl;

    return 0;
}
