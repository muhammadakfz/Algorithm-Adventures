#include <bits/stdc++.h>
#define int long long
using namespace std;

int power (int a, int b) {
    if(b == 0) return 1;
    if(b == 1) return a % 1000000;
    
    int ans = power(a, b/2);
    ans = (ans * ans) % 1000000;
    if (b%2 == 1) ans = (ans * a) % 1000000;
    
    return ans;
}

signed main() {

    int a, b; cin >> a >> b;
    if (pow(a, b) <= 999999) {
        cout << pow(a, b);
    } else {
        int ans = power(a, b), temp = ans, c = 0;
        if (temp == 0) c = 1;
        while (temp > 0) {
            c++;
            temp /= 10;
        } 
        
        for (int i = 1; i <= 6 - c; i++) cout << '0';
        cout << ans;
    }

    return 0;
}