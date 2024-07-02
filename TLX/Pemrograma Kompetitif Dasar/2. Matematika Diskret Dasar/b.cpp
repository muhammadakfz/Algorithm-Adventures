#include <bits/stdc++.h>
using namespace std;


int sieve[1000005];
bool is_prime[1000005];

void sieve_of_eratosthenes(int n) {
    is_prime[0] = is_prime[1] = false; 
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) is_prime[j] = false;
        }
    }

    int cnt = 1; 
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            sieve[cnt++] = i;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    memset(is_prime, true, sizeof(is_prime));
    
    sieve_of_eratosthenes(1000000);

    while(n--) {
        int x;
        cin >> x;
        cout << sieve[x] << '\n';
    }

    return 0;
}