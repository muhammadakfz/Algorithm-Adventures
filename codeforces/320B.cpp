#include <bits/stdc++.h>
#define int long long
using namespace std;

bool connected(pair<int,int> a, pair<int,int> b) {
    return (b.first < a.first && a.first < b.second) || (b.first < a.second && a.second < b.second);
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int,int>> edges;
    vector<vector<int>> adj; 
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 1) {
            int l, r;
            cin >> l >> r;
            edges.push_back({l, r});
            adj.push_back({});
            cnt++;
            for (int j = 0; j < cnt - 1; j++) {
                if (connected(edges[j], edges[cnt - 1])) {
                    adj[j].push_back(cnt - 1);
                }
                if (connected(edges[cnt - 1], edges[j])) {
                    adj[cnt - 1].push_back(j);
                }
            }
        } else {
            int a, b;
            cin >> a >> b;
            a--, b--;
            vector<int> vis(cnt, 0);
            queue<int> q;
            q.push(a);
            vis[a] = 1;
            bool ok = false;
            while (!q.empty()) {
                int u = q.front(); q.pop();
                if (u == b) {
                    ok = true;
                    break;
                }
                for (int v : adj[u]) {
                    if (!vis[v]) {
                        vis[v] = 1;
                        q.push(v);
                    }
                }
            }
            cout << (ok ? "YES\n" : "NO\n");
        }
    }

    return 0;
}

