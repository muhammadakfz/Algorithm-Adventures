#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e5 + 7;

signed main() {

    int n; cin >> n;
    vector<int> a(MOD);

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        a[x] = i + 1;
    }

    int m; cin >> m;
    int vasya = 0, petya = 0;
    for (int i = 0; i < m; i++) {
        int res; cin >> res;
        vasya += a[res];
        petya += n - a[res] + 1;
    }

    cout << vasya << " " << petya << endl;

    return 0;
}