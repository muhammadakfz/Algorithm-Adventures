#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, k;
    cin >> n >> k;
    vector<int> pref(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        pref[i] = pref[i - 1] + x;
    }

    int ans = INT_MAX, idx = -1;
   
    for (int i = 0; i <= n - k; i++) {
        int sum = pref[i + k] - pref[i];
        if (sum < ans) {
            ans = sum;
            idx = i + 1;
        }
    }

    cout << ans << endl;

    return 0;
}
