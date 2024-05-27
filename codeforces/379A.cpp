#include <bits/stdc++.h>
using namespace std;

int main() {

    int a, b; cin >> a >> b;
    int ans = a, tmp = 0, cnt = 0;
    while(a >= b) {
        a /= b;
        ans += a;
        tmp = a % b;
        a +=
    }

    cout << ans << endl;

    return 0;
}