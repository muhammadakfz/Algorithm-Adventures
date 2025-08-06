#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    int mid = n / 2, ans = n;
    for (int i = 0; i < n/2; i++) {
        while(mid <= n) {
            if (a[i]*2 <= a[mid]) {
                mid++;
                ans--;
                break;
            } else {
                mid++;
            }

            if (mid == n) {
                break;
            }
        }

        if (mid == n) {
            break;
        }
    }

    cout << ans << endl;

    return 0;
}
