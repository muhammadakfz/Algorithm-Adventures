#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1000000007;

signed main() {

    int n;
    cin >> n;
        
    int ans = 1;
    for (int i = 1; i <= n; i++) {
        ans = (ans * 2) % MOD;
    }

    cout << ans << endl;

    return 0;
}
