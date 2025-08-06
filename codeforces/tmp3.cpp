#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MAXX = 1e18;
vector<int> h;

bool cmp(int a, int b) {
    return h[a] < h[b];
}

signed main() {

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        h.resize(n);
        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }

        vector<int> sorted(n);
        iota(sorted.begin(),sorted.end(), 0);
        sort(sorted.begin(),sorted.end(), cmp);

        vector<vector<int>> adj(n);
        for (int i = 0; i + 1 < n; i++) {
            int u = sorted[i], v = sorted[i + 1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0, k - 1});

        vector<int> vis(n, MAXX);
        vis[k - 1] = 0;

        while(!pq.empty()) {
            auto [time, cur] = pq.top();
            pq.pop();

            if (time > vis[cur]) continue;

            for (int i : adj[cur]) {
                int travel = abs(h[i] - h[cur]);
                int arrival = time + travel;
                if (arrival <= h[cur] && arrival + 1 <= h[i]) {
                    if (arrival < vis[i]) {
                        vis[i] = arrival;
                        pq.push({arrival, i});
                    }
                }
            }
        }

        int mx = *max_element(h.begin(), h.end());
        bool ans = false;
        for (int i = 0; i < n; i++) {
            if (h[i] == mx && vis[i] != MAXX) {
                ans = true;
                break;
            }
        }

        if (ans) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
