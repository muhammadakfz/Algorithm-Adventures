#include <bits/stdc++.h>
using namespace std;

int main() {

    int k; cin >> k;
    int a[12];
    for (int i = 0; i < 12; i++) {
        cin >> a[i];
    }

    sort(a, a + 12, greater<int>());
    int sum = 0, cnt = 0;
    for (int i = 0; i < 12; i++) {
        if (sum >= k) break;
        sum += a[i];
        cnt++;
    }

    if (sum < k) {
        cout << -1 << endl;
    } else {
        cout << cnt << endl;
    }

    return 0;
}