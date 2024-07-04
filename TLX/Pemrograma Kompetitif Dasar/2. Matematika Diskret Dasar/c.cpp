#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;

    int ans = 1, tmp = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ans = lcm(ans, x);
    }

    cout << ans << endl;

    return 0;
}