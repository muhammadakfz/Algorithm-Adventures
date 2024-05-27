#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int a1 = k*l;
    int a2 = a1/nl;
    int a3 = c*d;
    int a4 = p/np;

    int a5 = min({a2, a3, a4})/n;
    cout << a5 << endl;

    return 0;
}