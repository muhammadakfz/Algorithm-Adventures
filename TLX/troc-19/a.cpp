#include <bits/stdc++.h>
using namespace std;

int main() {

    int p, q;
    cin >> p >> q;

    int sum = (p * p) + (q * q) + 1;
    if(sum % 4 == 0) cout << sum/4 << endl;
    else cout << -1 << endl;

    return 0;
}