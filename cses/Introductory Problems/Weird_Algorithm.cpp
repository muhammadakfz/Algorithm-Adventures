#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int n;
    cin >> n;

    cout << n << " ";
    while(n != 1) {
        if(n % 2 == 1) n = n * 3 + 1;
        else n /= 2;
        cout << n << " ";
    }

    return 0;
}