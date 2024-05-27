#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int ans = 0, idx = 0;
        for (int i = 0; i < n; i++) {
            int a, b; cin >> a >> b;
            if(a > 10) continue;
            if(b > ans) {
                ans = b;
                idx = i+1;
            }
        }

        cout << idx << "\n";
    }

    return 0;
}