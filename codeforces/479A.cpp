#include <bits/stdc++.h>
using namespace std;

int main() {

    int a[3];
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }

    int ans = 0;
    ans = max(ans, a[0] + a[1] + a[2]);
    ans = max(ans, a[0] * a[1] * a[2]);
    ans = max(ans, a[0] * a[1] + a[2]);
    ans = max(ans, a[0] + a[1] * a[2]);
    ans = max(ans, a[0] * (a[1] + a[2]));
    ans = max(ans, (a[0] + a[1]) * a[2]);

    cout << ans << endl;
    return 0;
}