#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORI(i, a, b) for (int i = (a); i <= (b); i++)
#define io_i ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

signed main() {
    io_i;

    int n; cin >> n;
    if (n <= 1000 - 1) cout << n << "\n";
    else if (n <= 10000 - 1) cout << n / 10 * 10 << "\n";
    else if (n <= 100000 - 1) cout << n / 100 * 100 << "\n";
    else if (n <= 1000000 - 1) cout << n / 1000 * 1000 << "\n";
    else if (n <= 10000000 - 1) cout << n / 10000 * 10000 << "\n";
    else if (n <= 100000000 - 1) cout << n / 100000 * 100000 << "\n";
    else if (n <= 1000000000 - 1) cout << n / 1000000 * 1000000 << "\n";

    return 0;
}