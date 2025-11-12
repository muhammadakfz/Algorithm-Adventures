#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, p, q;
    cin >> n >> m >> p >> q;

    vector<vector<pair<int, int>>> adj(n+1);

    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    vector<int> dist(n+1, INT_MAX);
    dist[p] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, p});

    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();

        if (d > dist[u]) continue;

        for (auto [v, w] : adj[u]) {
            if (dist[u] != INT_MAX && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }

    if (dist[q] == INT_MAX) {
        cout << -1 << endl;
    } else {
        cout << dist[q] << endl;
    }

    return 0;
}

