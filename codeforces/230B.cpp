#include <bits/stdc++.h>
#define ing long long
using namespace std;

const int MAXN = 1e6 + 5;
vector<bool> is_prime(MAXN, true);
unordered_set<long long> primes;

void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i < MAXN; ++i) {
        if (is_prime[i]) {
            for (int j = 2*i; j < MAXN; j += i) {
                is_prime[j] = false;
            } primes.insert(1LL * i*i);
        }
    }
}

signed main() {

    int t;
    cin >> t;

    sieve();
    while(t--) {
        long long n;
        cin >> n;

        if (primes.count(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
