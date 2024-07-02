#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {

    ll a, b;
    ll c, d;

    cin >> a >> b;
    cin >> c >> d;

    ll x = a * d + b * c;
    ll y = b * d;

    ll ans = __gcd(x, y);

    cout << x / ans << " " << y / ans << endl;

    return 0;
}