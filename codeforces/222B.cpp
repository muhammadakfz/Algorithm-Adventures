#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    vector<int> kolom(m);
    iota(kolom.begin(), kolom.end(), 0);

    while (k--) {
        char s;
        int x, y;
        cin >> s >> x >> y;

        x--, y--;

        if (s == 'g') cout << a[x][kolom[y]] << "\n";
        else if (s == 'r') {
            swap(a[x], a[y]);
        } else if (s == 'c') {
            swap(kolom[x], kolom[y]);
        }
    }

    return 0;
}
