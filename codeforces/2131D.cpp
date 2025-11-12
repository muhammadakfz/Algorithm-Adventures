#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Tipe data untuk menyimpan pasangan {jarak, node}
using pii = pair<int, int>;

// Fungsi BFS untuk mencari node terjauh (bagian dari kalkulasi diameter)
pii bfs(int start, int n, const vector<vector<int>>& adj) {
    vector<int> dist(n + 1, -1);
    vector<int> q;
    q.push_back(start);
    dist[start] = 0;
    
    int head = 0;
    pii farthest = {0, start};

    while(head < q.size()){
        int u = q[head++];
        // Selalu update node terjauh yang ditemukan
        if (dist[u] > farthest.first) {
            farthest = {dist[u], u};
        }
        for (int v : adj[u]) {
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push_back(v);
            }
        }
    }
    // Setelah loop selesai, cari lagi node dengan jarak maksimal dari antrian q
    // Ini untuk memastikan kita mendapatkan node terjauh dari seluruh tree, bukan hanya yang terakhir diproses
    for(int node : q) {
        if(dist[node] > farthest.first) {
            farthest = {dist[node], node};
        }
    }
    return farthest;
}

// Fungsi DFS rekursif untuk menghitung jumlah operasi
int dfs_ops(int u, int p, const vector<vector<int>>& adj) {
    int ops_in_subtrees = 0;
    int child_branches = 0;
    
    for (int v : adj[u]) {
        if (v == p) continue;
        child_branches++;
        ops_in_subtrees += dfs_ops(v, u, adj);
    }
    
    if (child_branches == 0) {
        return 0; // Daun tidak butuh operasi di sub-pohonnya
    }
    
    // Untuk menggabungkan 'k' cabang anak menjadi satu cabang ke atas, perlu 'k-1' operasi
    return ops_in_subtrees + (child_branches - 1);
}

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // 1. Hitung diameter
    pii farthest_from_start = bfs(1, n, adj);
    pii diameter_endpoints = bfs(farthest_from_start.second, n, adj);
    int diameter = diameter_endpoints.first;

    // 2. Jika diameter sudah minimal, tidak perlu operasi
    if (diameter <= 2) {
        cout << 0 << "\n";
        return;
    }
    
    // 3. Jika tidak, hitung operasi minimum menggunakan DFS
    // Pilih salah satu ujung diameter sebagai root untuk DFS agar lebih intuitif,
    // meskipun sebenarnya root bisa dipilih secara acak.
    int root = diameter_endpoints.second; 
    int total_ops = dfs_ops(root, 0, adj);
    cout << total_ops << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}