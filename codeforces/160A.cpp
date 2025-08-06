#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    int ans = 0;
    sort(a.rbegin(), a.rend());

    int cur = 0;
    for (int i = 0; i < n; i++) {
        cur += a[i];
        ans++;
        if (cur > sum - cur) {
            cout << ans << endl;
            return 0;
        }
    }

    
    return 0;
}
