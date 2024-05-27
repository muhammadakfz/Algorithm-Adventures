#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += abs(v[i]-(i+1));
    }

    cout << sum << endl;

    return 0;
}