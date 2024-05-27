#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    if(n&1) cout << -1 << endl;
    else {
        for (int i = 1; i <= n; i++) {
            if(i%2==0) cout << i-1;
            else cout << i+1;
            cout << " ";
        }
    }

    return 0;
}