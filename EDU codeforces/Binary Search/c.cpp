#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    vector<int> a(n+1), b(n+1);
    for(int i = 1; i <= n; i++) cin >> a[i]; 
    for(int i = 1; i <= k; i++) cin >> b[i];

    for (int i = 1; i <= k; i++) {
        int l = 1, r = n, ans = n+1;
        while (l <= r) {
            int mid = (l + r)/2;
            if (a[mid] >= b[i]) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
