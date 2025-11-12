#include <bits/stdc++.h>
using namespace std;

vector<int> par, sz;

int find(int x) {
    if(par[x] == x) return x;
    return par[x] = find(par[x]);
}

void unite(int a, int b) {
    a = find(a);
    b = find(b);
    if(a != b) {
        if(sz[a] < sz[b]) swap(a, b);
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

    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        unite(a, b);
    }

    if (find(m) != find(1)) {
        cout << "IMPOSSIBLE" << endl;
    } else {



    return 0;
}
