#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    

    vector<int> a(n), b(k);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < k; i++) cin >> b[i];

    sort(a.begin(), a.end());

    for (int i = 0; i < k; i++) {
        int l = 0, r = n - 1;
        while (l < r) {
            int mid = (l + r)/2;
            if (a[mid] < b[i]) {
                l = mid + 1;
            } else {
                r = mid;
            }
        }

        if (l < n and a[l] == b[i]) {
            cout << "YES" << endl;
        } else cout << "NO" << endl;
    }

    return 0;
}
