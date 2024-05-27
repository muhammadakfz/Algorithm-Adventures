#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int n, m, a;
    cin >> n >> m >> a;
    cout << ((n+a-1)/a)*((m+a-1)/a) << endl;

    return 0;
}