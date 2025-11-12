#include <bits/stdc++.h>
using namespace std;

vector<int> par, sz, score, add;
vector<vector<int>> members;

int find(int a) {
    if(par[a] == a) return a;
    return par[a] = find(par[a]);
}

void join(int a, int b) {
    int x = find(a);
    int y = find(b);
    if (x != y) {
        if (sz[x] < sz[y]) swap(x, y);
        for (auto i: members[y]) {
            score[i] += add[y] - add[x];
        }
        
        members[x].insert(members[x].end(), members[y].begin(), members[y].end());
        members[y].clear();
        par[y] = x;
        sz[x] += sz[y];
        add[y] = 0;
    }
}

void update_score(int a, int val) {
    int x = find(a);
    add[x] += val;
}

int main() {

    int n, m;
    cin >> n >> m;

    par.resize(n+1);
    sz.resize(n+1, 1);
    members.resize(n+1);
    score.resize(n+1, 0);
    add.resize(n+1, 0);
    iota(par.begin(), par.end(), 0);
    
    for(int i = 1; i <= n; i++) {
        members[i] = {i};
    }

    while (m--) {
        string s;
        cin >> s;
        if(s == "add") {
            int x, y;
            cin >> x >> y;
            update_score(x, y);
        }

        if (s == "join") {
            int x, v;
            cin >> x >> v;
            join(x, v);
        }

        if (s == "get") {
            int x;
            cin >> x;
            cout << score[x] + add[find(x)] << "\n";
        }
    }

    return 0;
}
