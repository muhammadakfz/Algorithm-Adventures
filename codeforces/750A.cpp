#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    int ans = 0, tmp = 0;
    for (int i = 1; i <= n; i++) {
        tmp += (5*i);
        if(tmp+k < 241) ans = i;
    }

    cout << ans << endl;  

    return 0;
}