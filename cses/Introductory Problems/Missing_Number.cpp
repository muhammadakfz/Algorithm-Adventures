#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n-1; i++) {
        cin >> a[i];
    }

    if(n == 2) {
        if(a[0] == 1) cout << 2;
        else cout << 1;
        return 0;
    }

    sort(a, a+n-1);
    for (int i = 0; i < n-1; i++) {
        if(a[i] + 1 != a[i + 1]) {
            cout << a[i] + 1;
            break;
        }
        // cout << a[i] << " ";
    }

    return 0;
}