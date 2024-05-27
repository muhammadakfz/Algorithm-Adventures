#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int n; cin >> n;
    if(n % 2) cout << 0 << endl;
    else cout << (int)pow(2, n/2) << endl;

    return 0;
}