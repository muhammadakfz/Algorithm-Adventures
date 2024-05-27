#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    int max_value = 0, min_value = 1010;
    int mx = 0, mn = 0;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        if(x > max_value) {
            max_value = x;
            mx = i;
        } 
        
        if(x <= min_value) {
            min_value = x;
            mn = i;
        }
    }

    if(mx > mn) cout << (mx-1) + (n-mn) - 1;
    else cout << (mx-1) + (n-mn);

    return 0;
}