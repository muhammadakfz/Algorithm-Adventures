#include <bits/stdc++.h>
using namespace std;

int main() {

    int a, m;
    cin >> a >> m;

    int g = gcd(a, m);
    if((m-a) % g == 0) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}
