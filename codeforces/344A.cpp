#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int count = 1;
    int prev = 0;

    while(n--) {
        int p; cin >> p;
        if (p != prev) count++;
        prev = p;
    }

    cout << count - 1;
    return 0;
}