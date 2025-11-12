#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int tmp = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        tmp = max(tmp, a[i]);
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += tmp - a[i];
    }
    
    cout << ans << endl;

    return 0;
}
