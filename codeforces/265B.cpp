#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = a[0] + 1;

    for (int i = 1; i < n; i++) {
        ans += abs(a[i] - a[i-1]) + 2;

        cout << a[i] << " " << ans << endl;
    }

    cout << ans << endl;

    // 5
    // 2, 1, 2, 1, 1


    // cout << ans << endl;   
    
    // 2
    // 1
    // 2
    // 1 2
    // 2 5

    return 0;
}