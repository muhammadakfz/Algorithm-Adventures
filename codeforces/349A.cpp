#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int n;
    cin >> n;
    
    int uang25 = 0, uang50 = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
         
        if (x == 25) {
            uang25++;
        } else if (x == 50) {
            if (uang25 > 0) {
                uang25--;
                uang50++;
            } else {
                cout << "NO" << endl;
                return 0;
            }
        } else if (x == 100) {
            if (uang50 > 0 && uang25 > 0) {
                uang50--;
                uang25--;
            } else if (uang25 >= 3) {
                uang25 -= 3;
            } else {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;

    return 0;
}
