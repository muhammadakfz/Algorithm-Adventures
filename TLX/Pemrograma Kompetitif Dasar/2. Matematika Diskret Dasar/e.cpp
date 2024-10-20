#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1000000007;
vector<int> fact, inv_fact;

int pow_mod(int base, int exp) {
    int result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = result * base % MOD;
        }
        base = base * base % MOD;
        exp /= 2;
    }
    return result;
}

void precompute_factorials(int n) {
    fact.resize(n + 1);
    inv_fact.resize(n + 1);
    fact[0] = inv_fact[0] = 1;
    for (int i = 1; i <= n; ++i) {
        fact[i] = fact[i - 1] * i % MOD;
    }

    inv_fact[n] = pow_mod(fact[n], MOD - 2);
    for (int i = n - 1; i >= 1; --i) {
        inv_fact[i] = inv_fact[i + 1] * (i + 1) % MOD;
    }
}


int combination(int n, int k) {
    if (k > n || k < 0) return 0;
    return fact[n] * inv_fact[k] % MOD * inv_fact[n - k] % MOD;
}

signed main() {
    int N, A, B;
    cin >> N >> A >> B;

    precompute_factorials(N);

    int result = 0;
    for (int k = A; k <= B; ++k) {
        result = (result + combination(N, k)) % MOD;
    }

    cout << result << endl;

    return 0;
}