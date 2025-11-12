#include <bits/stdc++.h>
#define int long long
using namespace std;

struct segtree {
    int sz;
    vector<int> tree;

    void init(int n) {
        sz = 1;
        while (sz < n) sz *= 2;
        tree.assign(2*sz, 0);
    }

    void set(int i, int v, int x, int lx, int rx) {
        if (rx - lx == 1) {
            tree[x] = v;
            return;
        }
        int m = (lx + rx)/2;
        if (i < m) {
            set(i, v, 2*x+1, lx, m);
        } else {
            set(i, v, 2*x+2, m, rx);
        }
        tree[x] = tree[2*x+1] + tree[2*x+2]; 
    }

    int sum(int l, int r, int x, int lx, int rx) {
        if (rx <= l || lx >= r) return 0; 
        if (lx >= l && rx <= r) return tree[x];
        int m = (lx+rx)/2;
        int s1 = sum(l, r, 2*x+1, lx, m);
        int s2 = sum(l, r, 2*x+2, m, rx);
        return s1 + s2; 
    }

    int sum(int l, int r) {
        return sum(l, r, 0, 0, sz);
    }

    void set(int i, int v) {
        set(i, v, 0, 0, sz);
    }
};

signed main() {
    int n, m;
    cin >> n >> m;

    segtree st;
    st.init(n);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.set(i, x);
    }

    while(m--) {
        int p;
        cin >> p;
        if (p == 1) {
            int i, v;
            cin >> i >> v;
            st.set(i, v);
        } else {
            int l, r;
            cin >> l >> r;
            cout << st.sum(l, r) << endl;
        }
    }

    return 0;
}

