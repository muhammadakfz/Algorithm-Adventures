#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;
    while(t--) {
        int a, b; cin >> a >> b;
        int x = min(a, b);
        int y = max(a, b);
        int ans = 0;
        if (x * 2 < y) {
            ans = y * y;
        } else {
            ans = 4 * x * x;
        }

        cout << ans << endl;
    }

    return 0;
}