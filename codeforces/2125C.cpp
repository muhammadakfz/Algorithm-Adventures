#include <bits/stdc++.h>
#define int long long
using namespace std;

int f(int n) {
    int res = n;
    res -= n / 2;
    res -= n / 3;
    res -= n / 5;
    res -= n / 7;
    res += n / 6;
    res += n / 10;
    res += n / 14;
    res += n / 15;
    res += n / 21;
    res += n / 35;
    res -= n / 30;
    res -= n / 42;
    res -= n / 70;
    res -= n / 105;
    res += n / 210;
    return res;
}

signed main() {

    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        l--;
        cout << f(r) - f(l) << "\n";
    }

    return 0;
}
