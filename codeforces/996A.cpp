#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int a[] = {100, 20, 10, 5, 1};

    int ans = 0;
    while (n > 0) {
        for (int i = 0; i < 5; i++) {
            if (n >= a[i]) {
                n -= a[i];
                ans++;
                break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
