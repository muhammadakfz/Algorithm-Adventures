#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int a, b, k, x;
    cin >> a >> b >> k >> x;

    int sum = x;
    while(k--) sum = abs(sum*a+b);

    cout << sum << endl;
    return 0;
}