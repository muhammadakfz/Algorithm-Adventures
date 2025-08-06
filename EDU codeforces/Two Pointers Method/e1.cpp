#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int i = 0, j = 0, ans = 0;
    
    map<int, int> freq;
    while (j < n) {
        freq[a[j]]++;

        while (freq.size() > k) {
            freq[a[i]]--;
            if (freq[a[i]] == 0) {
                freq.erase(a[i]);
            }
            i++;
        }

        ans += j - i + 1;
        j++;
    }

    cout << ans << endl;

    return 0;
}
