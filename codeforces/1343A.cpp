#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        int n; cin >> n;
        if(n % 4) {
            cout << "NO\n";
            continue;
        } else {
            cout << "YES\n";
        }

        for(int i = 2; i <= n; i+=2) cout << i << ' ';
        for(int i = 1; i <= n; i+=2) {
            if(i == n-1) cout << i + n/2 << ' ';
            else cout << i << ' ';
        }
        cout << endl;
    }

    return 0;
}
