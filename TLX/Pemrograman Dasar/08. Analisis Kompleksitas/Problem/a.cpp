#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        bool f = 1;

        if(n == 1) {
            cout << "BUKAN\n";
            continue;
        }
        
        for (int i = 2; i <= sqrt(n); i++) {
            if(n%i == 0) f = 0;    
        }

        if(f) cout << "YA\n";
        else cout << "BUKAN\n";
    }

    return 0;
}