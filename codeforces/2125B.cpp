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

signed main() {

    int t;
    cin >> t;
    while(t--) {
        int a, b, k;
        cin >> a >> b >> k;

        if (a == 0 && b == 0) {
            cout << "0\n";
            continue;
        } 

        int fpb = gcd(a, b);
        int dx = a / fpb;
        int dy = b / fpb;

        if (dx <= k and dy <= k) cout << 1 << endl;
        else cout << 2 << endl;
    }

    return 0;
}