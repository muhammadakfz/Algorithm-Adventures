#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int tmp = 0;

        for (int i = 1; i < n - 2; i++) {
            if (a[i] < 0 or a[i - 1] < 0 or a[i + 1] < 0) {
                cout << "NO\n";
                goto end;
            }

            if (a[i - 1] > 0) {
                int tmp = a[i - 1];
                a[i - 1] = 0, a[i] -= 2 * tmp, a[i + 1] -= tmp;
                if (a[i - 1] != 0 and (a[i] <= 0 or a[i + 1] <= 0)) {
                    cout << "NO\n";
                    goto end;
                }
            }
        }

        if (a[n - 2] == a[n - 1] * 2 and a[n - 1] == a[n - 3]) cout << "YES\n";
        else cout << "NO\n";
        end:;
    }

    return 0;
}