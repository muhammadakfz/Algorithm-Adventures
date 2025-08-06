#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int n; cin >> n;
    vector<int> arr(n);
    int total = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        total += arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        cout << total - arr[i] << endl;
    }

    return 0;
}