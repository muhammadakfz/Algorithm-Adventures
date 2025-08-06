#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b);

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n; cin >> n;

        vector<int> a(n+1);

        int mx = INT_MIN, mn = INT_MAX;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            mx = max(mx, a[i]);
            mn = min(mn, a[i]);
            // if (i == 1) mx = a[i];
            // else mx = max(mx, a[i]);
        }

        // int ans = INT_MIN;
        // int mx = *max_element(a.begin() + 1, a.end());
        // a[0] = 0;
        // for (int i = 0; i <= mx; i++) {
        //    for (int j = 1; j < n; j++) {
        //         for (int k = j+1; k <= n; k++) {
        //             int tmp = gcd(a[j]+i, a[k]+i);
        //             ans = max(ans, tmp);
        //         }
        //    }
        // }
        //
        

        // int g = 0;
        // for (int i = 2; i <= n; i++) {
        //    g = gcd(g, abs(a[i] - a[1]));
        // }

        cout << mx - mn << endl;
    }

    // cout << gcd(10, 20) << endl;

    return 0;
} 
