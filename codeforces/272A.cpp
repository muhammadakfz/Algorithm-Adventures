#include <bits/stdc++.h>
using namespace std;

signed main() {
    int n;
    cin >> n;
    int a[n];

    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    int ans = 5;
    for (int i = sum+1; i <= sum+5; i++) {
        if(i%(n+1)==1) ans--;
    }

    cout << ans << endl;    
    

    return 0;
}