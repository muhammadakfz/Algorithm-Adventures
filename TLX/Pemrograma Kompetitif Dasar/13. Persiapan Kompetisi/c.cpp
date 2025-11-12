#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int n;
    cin >> n;

    int ans = 0;

    while(n) {
        ans += ((n+1) / 2) * ((n+1) / 2);
        n /= 2;
    }

    cout << ans << endl;


    return 0;
}
