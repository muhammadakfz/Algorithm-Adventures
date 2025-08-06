#include <bits/stdc++.h>
using namespace std;

int par[100005];
int tinggi[100005];

int find(int x) {
    if (par[x] == x) return x;
    return par[x] = find(par[x]);
}

void union_set(int x, int y) {
    x = find(x);
    y = find(y);
    if (x != y) {
        if (tinggi[x] > tinggi[y]) par[y] = x;
        else if (tinggi[x] < tinggi[y]) par[x] = y;
        else {
            par[y] = x;
            tinggi[x]++;
        }
    }
}

void init(int n) {
    for (int i = 0; i <= n; i++) {
        par[i] = i;
    }
}

int main() {

    int n; cin >> n;
    vector<int> x(n), y(n);

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    init(n);
    unordered_map<int, int> mp_x, mp_y;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (mp_x.find(x[i]) != mp_x.end()) {
            union_set(i, mp_x[x[i]]);
        } else {
            mp_x[x[i]] = i;
        }

        if (mp_y.find(y[i]) != mp_y.end()) {
            union_set(i, mp_y[y[i]]);
        } else {
            mp_y[y[i]] = i;
        }
    }

    for (int i = 0; i < n; i++) {
        if (find(i) == i) {
            ans++;
        }
    }

    cout << ans-1 << endl;

    
    return 0;
}
