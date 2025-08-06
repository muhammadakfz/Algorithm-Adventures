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
    int sum = 0, max_length = 0;
    
    while (r < n) {
        sum += a[r];
        
        while (sum > s) {
            sum -= a[l];
            l++;
        }
        
        max_length = max(max_length, r - l + 1);
        
        r++;
    }
 
    cout << max_length << endl;
 
 
    return 0;
}
