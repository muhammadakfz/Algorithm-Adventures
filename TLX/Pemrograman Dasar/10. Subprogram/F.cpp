#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, d;
    cin >> n >> d;

    int mn = INT_MAX, mx = INT_MIN;
    int x[n+1], y[n+1];

    for (int i = 0; i < n; i++) cin >> x[i] >> y[i];
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            int t = pow(abs(x[j]-x[i]), d) + pow(abs(y[j]-y[i]), d);
            mn = min(mn, t), mx = max(mx, t);
        }
    }

    cout << mn << " " << mx << "\n";
    return 0;
}