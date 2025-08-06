#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, x;
    cin >> n >> x;

    vector<int> a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }

    sort(a.begin(), a.end());
    
    // cout << a[(n-1)/2 - 1] << endl;
    
    int ans = 0;
    while (true) {
        sort(a.begin(), a.end());
        int m = (a.size()+1)/2 - 1;
        if (a[m] == x) break;
        a.push_back(x);
        ans++;
    }

    cout << ans << endl;
    return 0;
}
