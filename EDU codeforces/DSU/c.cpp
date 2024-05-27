#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORI(i, a, b) for (int i = (a); i <= (b); i++)
#define io_i ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int par[200005], sz[200005], cur[200005], score[200005];

int find(int x) {
    if(par[x] == x) return x;
    return find(par[x]);
} 

void merge(int x, int y) {
    int pa = find(x);
    int pb = find(y);
    if(pa == pb) return;
    if(sz[pa] < sz[pb]) swap(pa, pb);
    par[pb] = pa;
    sz[pa] += sz[pb];
    cur[pb] = score[pa];
}

void update(int x, int y) {
    x = find(x);
    score[x] += y;
}

int find_score(int x) {
    if(x == par[x]) return score[x];
    else return ((score[x] - cur[x]) + find_score(par[x]));
}

signed main() {
    io_i;

    int n, m; cin >> n >> m;
    for (int i = 1; i <= n; i++) par[i] = i;
    for (int i = 0; i < m; i++) {
        string s; cin >> s;
        if(s == "join"){
            int x, y; cin >> x >> y;
            merge(x, y);
        } else if(s == "add"){
            int x, y; cin >> x >> y;
            update(x, y);
        } else {
            int x; cin >> x;
            cout << find_score(x) << "\n";
        }
    }

    return 0;
}