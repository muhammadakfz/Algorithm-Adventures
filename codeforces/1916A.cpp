#include <bits/stdc++.h>
#define int long long
using namespace std;
 
bool f(int n) {
    if(2023 % n != 0) return false;
    else return true;
}
 
signed main() {
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        int a[n], ans = 1;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            ans *= a[i];   
        }
 
        if(f(ans)) {
            cout << "YES" << endl;
            if(ans == 2023) {
                for(int i = 0; i < k; i++) cout << 1 << " ";
            } else {
                cout << 2023/ans << " ";
                for(int i = 0; i < k-1; i++) cout << 1 << " ";
            } cout << endl;
        }
 
        else cout << "NO" << endl;
    }
 
    return 0;
}