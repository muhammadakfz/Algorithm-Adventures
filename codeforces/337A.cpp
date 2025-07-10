#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    vector<int> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }    sort(a.begin(), a.end());
    
    int ans = INT_MAX;
    
    for (int i = 0; i <= m - n; i++) {
        int diff = a[i + n - 1] - a[i];
        ans = min(ans, diff);
    }
    
    cout << ans << endl;

    return 0;
}