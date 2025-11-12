#include <bits/stdc++.h>
using namespace std;

vector<int> par, sz, mn, mx;

int find(int x) {
    if(par[x] != x) par[x] = find(par[x]);
    return par[x];
}

void union_sets(int x, int y) {
    int root_x = find(x);
    int root_y = find(y);

    if(root_x < root_y) swap(root_x, root_y);
    if(root_x != root_y) {
        par[root_x] = root_y;
        sz[root_y] += sz[root_x];
        mn[root_y] = min(mn[root_y], mn[root_x]);
        mx[root_y] = max(mx[root_y], mx[root_x]);
    }
}

int main() {

    int n, m;
    cin >> n >> m;

    par.resize(n+1);
    sz.resize(n+1, 1);
    mn.resize(n+1);
    mx.resize(n+1);

    iota(par.begin(), par.end(), 0);
    iota(mn.begin(), mn.end(), 0);
    iota(mx.begin(), mx.end(), 0);

    for (int i = 0; i < m; i++) {
        string s;
        cin >> s;

        if (s == "union") {
            int x, y;
            cin >> x >> y;
            union_sets(x, y);
        }

        if (s == "get") {
            int x;
            cin >> x;
            int root_x = find(x);
            cout << mn[root_x] << " " << mx[root_x] << " " << sz[root_x] << endl;
        }
    }

    return 0;
}
