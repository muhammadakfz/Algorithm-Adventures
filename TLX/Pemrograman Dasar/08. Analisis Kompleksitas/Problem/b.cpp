#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        bool flag = 1;

        if(n == 1) {
            cout << "BUKAN" << endl;
            continue;
        }

        for (int i = 2; i <= sqrt(n); i++) {
            if(n % i == 0) flag = 0;
        }
        
        if(flag) cout << "YA\n";
        else cout << "BUKAN\n";
    }

    return 0;
}