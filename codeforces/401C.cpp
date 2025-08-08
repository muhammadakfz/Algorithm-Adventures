#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int n, m;
    cin >> n >> m;

    if (m < n - 1 || m > 2 * (n + 1)) {
        cout << -1 << endl;
        return 0;
    }

    char last = '\0';
    int one = 0;

    while (n > 0 || m > 0) {
        if (one == 2) {
            if (n > 0) {
                cout << '0';
                n--;
                last = '0';
                one = 0;
            }
        } 
        else if (last == '0') {
            if (m > 0) {
                cout << '1';
                m--;
                last = '1';
                one = 1;
            }
        }
        else {
            if (m > n) {
                if (m > 0) {
                    cout << '1';
                    m--;
                    last = '1';
                    one++;
                }
            } 
            else {
                if (n > 0) {
                    cout << '0';
                    n--;
                    last = '0';
                    one = 0;
                } else {
                    cout << '1';
                    m--;
                    last = '1';
                    one++;
                }
            }
        }
    }

    cout << endl;
    return 0;
}
