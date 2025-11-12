#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<int> a(n);
        unordered_map<int, vector<int>> pos;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            pos[a[i]].push_back(i+1);
        }

        vector<int> vals;
        for (auto &kv : pos) {
            vals.push_back(kv.first);
        }

        // Kasus khusus: jika ada nilai 1 dengan setidaknya 4 indeks,
        // kita bisa keluarkan 4 indeks tersebut langsung.
        if (pos.count(1) && (int)pos[1].size() >= 4) {
            for (int i = 0; i < 4; i++) cout << pos[1][i] << " ";
            cout << "\n";
            continue;
        }

        bool found = false;
        for (int i = 0; i < (int)vals.size() && !found; i++) {
            for (int j = i+1; j < (int)vals.size() && !found; j++) {
                if (gcd(vals[i], vals[j]) == 1) {
                    // Pastikan ada 2 indeks untuk masing-masing nilai
                    if ((int)pos[vals[i]].size() >= 2 && (int)pos[vals[j]].size() >= 2) {
                        cout << pos[vals[i]][0] << " " << pos[vals[i]][1] << " ";
                        cout << pos[vals[j]][0] << " " << pos[vals[j]][1] << "\n";
                        found = true;
                    }
                }
            }
        }

        if (!found) cout << 0 << "\n";
    }

    return 0;
}
