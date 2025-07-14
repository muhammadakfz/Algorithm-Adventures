#include <bits/stdc++.h>
#include <cstdint>
using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    int ans = INT_MIN;
    int f, t;

    for (int i = 0; i < n; i++) {
        cin >> f >> t;
        if (t > k) {
            ans = max(ans, f - (t - k));
        } else {
            ans = max(ans, f);
        }
    }

    cout << ans << endl;

    
    return 0;
}
