#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

void solve() {
    int n;
    std::cin >> n;
    std::vector<long long> a(n), b(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
    }

    // Condition 1: The last element must be the same.
    if (a[n - 1] != b[n - 1]) {
        std::cout << "NO\n";
        return;
    }

    // Condition 2: The multiset of prefix XORs must be identical.
    std::vector<long long> prefix_a(n);
    std::vector<long long> prefix_b(n);

    // Calculate prefix XORs for array 'a'
    prefix_a[0] = a[0];
    for (int i = 1; i < n; i++) {
        prefix_a[i] = prefix_a[i - 1] ^ a[i];
    }

    // Calculate prefix XORs for array 'b'
    prefix_b[0] = b[0];
    for (int i = 1; i < n; i++) {
        prefix_b[i] = prefix_b[i - 1] ^ b[i];
    }

    // To check if the multisets are the same, we can sort them and compare.
    std::sort(prefix_a.begin(), prefix_a.end());
    std::sort(prefix_b.begin(), prefix_b.end());

    if (prefix_a == prefix_b) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}