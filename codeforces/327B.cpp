#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> sieve(int n) {
    int limit = max(100LL, n * (long long)(log(n) + log(log(n))) + 10);
    vector<bool> is_prime(limit + 1, true);
    vector<int> primes;

    is_prime[0] = is_prime[1] = false;
    for (int i = 2; primes.size() < n; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            if (i * 1LL * i <= limit) {
                for (int j = i * i; j <= limit; j += i)
                    is_prime[j] = false;
            }
        }
    }
    return primes;
}

signed main() {

    int n;
    cin >> n;
    vector<int> primes = sieve(n);
    for (int i = 0; i < n; i++) {
        cout << primes[i] << " ";
    }



    return 0;
}
