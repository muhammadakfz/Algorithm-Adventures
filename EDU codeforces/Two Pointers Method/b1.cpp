#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int n, s;
    cin >> n >> s;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int l = 0, r = 0;
    int sum = 0, min_length = INT_MAX;
    
    while (r < n) {
        sum += a[r];

        while (sum >= s) {
            min_length = min(min_length, r - l + 1);
            sum -= a[l];
            l++;
        }
        r++;
    }
    
    if (min_length == INT_MAX) {
        cout << -1 << endl; 
        return 0;
    }
    cout << min_length << endl;


    return 0;
}
