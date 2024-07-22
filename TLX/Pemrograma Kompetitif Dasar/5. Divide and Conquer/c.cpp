#include <bits/stdc++.h>
#define int long long
using namespace std;

int a, b, c, n;

int power (int a, int b) {
    if(b == 0) return 1;
    if(b == 1) return a % n;
    
    int ans = power(a, b/2);
    ans = (ans * ans) % n;
    if (b%2 == 1) ans = (ans * a) % n;
    
    return ans;
}

signed main() {

    cin >> a >> b >> c >> n;

    int sum = power(a, b);
    for (int i = 0; i < c - 1; i++) {
        sum = power(sum, b) % n;
    }

    cout << sum + 1 << endl;


    return 0;
}