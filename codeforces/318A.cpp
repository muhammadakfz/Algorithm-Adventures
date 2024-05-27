#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n, k; cin >> n >> k;
    // vector<int> a;

    // for (int i = 1; i <= n; i+=2) {
    //     a.push_back(i);
    // }

    // for (int i = 0; i <= n; i+=2) {
    //     if(i==0) continue;
    //     a.push_back(i);
    // }
    
    // // for (int i = 0; i < a.size(); i++)
    // // {
    // //     cout << a[i] << " ";
    // // }
    
    // cout << a[k-1];
    
    if(k <= (n+1)/2) cout << 2*k-1;
    else {
        k -= (n+1)/2;
        cout << 2*k;
    }

    return 0;
}

// 1 3 5 7 2