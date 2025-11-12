#include <bits/stdc++.h>
using namespace std;

int isprime(int n) {
    if(n == 1) return 0;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n; cin >> n;
    for(int i = 4; i < n; i++) {
        if(!isprime(i) && !isprime(n - i)) {
            cout << i << " " << n - i << endl;
            break;
        }
    }

    return 0;
}
