#include <bits/stdc++.h>
using namespace std;

bool prime[1000001];
int a[1000001];

bool isprime(int n) {
    for(int i = 2; i*i <= n; i++) if(n%i == 0) return false;
    return true;
}

int main() {

    int n, m; cin >> n >> m;
    int ans = 0;
    for(int i = n+1;;i++) {
        if(isprime(i)) {
            ans = i;
            break;
        }
    }

    if(ans == m) cout << "YES";
    else cout << "NO";

    return 0;
}