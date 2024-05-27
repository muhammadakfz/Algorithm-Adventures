#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n; cin >> n;
    int cnt = 0;
    while(n) {
        if(n%10==7||n%10==4) cnt++;
        n/=10; 
    }

    if(cnt==4||cnt==7) cout << "YES";
    else cout << "NO";

    return 0;
}