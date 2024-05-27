#include <bits/stdc++.h>
using namespace std;

int main() {

    int x, y;cin >> x >> y;
    int n; cin >> n;

    n %= 6;
    int ans;
    if (n==0) ans = -y+x;
    else if (n==1) ans = x;
    else if (n==2) ans = y;
    else if (n==3) ans = y-x;
    else if (n==4) ans = -x;
    else if (n==5) ans = -y;

    int mod = 1000000007;
    cout << (ans % mod + mod) % mod << endl;

    return 0;
}