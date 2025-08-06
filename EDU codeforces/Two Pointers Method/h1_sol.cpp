#include <bits/stdc++.h>
#define int long long
using namespace std;

int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

const int MAXN = 100005;
const int K_LOG = 17;
int sparse_table[MAXN][K_LOG + 1];
int log_table[MAXN];

int query_gcd(int L, int R) {
    int j = log_table[R - L + 1];
    return gcd(sparse_table[L][j], sparse_table[R - (1 << j) + 1][j]);
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    bool has_one = false;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] == 1) {
            has_one = true;
        }
    }

    if (has_one) {
        cout << 1 << endl;
        return 0;
    }

    log_table[1] = 0;
    for (int i = 2; i <= n; i++) {
        log_table[i] = log_table[i / 2] + 1;
    }

    for (int i = 0; i < n; i++) {
        sparse_table[i][0] = a[i];
    }
    for (int j = 1; j <= K_LOG; j++) {
        for (int i = 0; i + (1 << j) <= n; i++) {
            sparse_table[i][j] = gcd(sparse_table[i][j - 1], sparse_table[i + (1 << (j - 1))][j - 1]);
        }
    }
    
    if (query_gcd(0, n - 1) > 1) {
        cout << -1 << endl;
        return 0;
    }

    int min_len = n;

    for (int l = 0; l < n; ++l) {
        int low = l;
        int high = n - 1;
        int best_r = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (query_gcd(l, mid) == 1) {
                best_r = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        if (best_r != -1) {
            min_len = min(min_len, best_r - l + 1);
        }
    }

    cout << min_len << endl;

    return 0;
}
