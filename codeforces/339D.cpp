#include <bits/stdc++.h>
using namespace std;

const int N = 1 << 17;
int tree[2 * N];    
int n, m;

void build(vector<int>& a, int v, int l, int r, bool is_or) {
    if (l == r) {
        tree[v] = a[l];
    } else {
        int mid = (l + r) / 2;
        build(a, v * 2, l, mid, !is_or);
        build(a, v * 2 + 1, mid + 1, r, !is_or);
        if (is_or)
            tree[v] = tree[v * 2] | tree[v * 2 + 1];
        else
            tree[v] = tree[v * 2] ^ tree[v * 2 + 1];
    }
}

void update(int v, int l, int r, int pos, int val, bool is_or) {
    if (l == r) {
        tree[v] = val;
    } else {
        int mid = (l + r) / 2;
        if (pos <= mid)
            update(v * 2, l, mid, pos, val, !is_or);
        else
            update(v * 2 + 1, mid + 1, r, pos, val, !is_or);

        if (is_or)
            tree[v] = tree[v * 2] | tree[v * 2 + 1];
        else
            tree[v] = tree[v * 2] ^ tree[v * 2 + 1];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    int size = 1 << n;
    vector<int> a(size);
    for (int i = 0; i < size; i++) cin >> a[i];

    bool is_or = (n % 2 == 1);
    build(a, 1, 0, size - 1, is_or);

    while (m--) {
        int p, b;
        cin >> p >> b;
        update(1, 0, size - 1, p - 1, b, is_or);
        cout << tree[1] << "\n";
    }
}

