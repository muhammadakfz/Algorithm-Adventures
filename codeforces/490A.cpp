#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    map<int, int> mp;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        mp[i] = x;
    }

    int a = 0, b = 0, c = 0;
    vector<int> v1, v2, v3;
    for (int i = 1; i <= n; i++) {
        if(mp[i] == 1) {
            a++;
            v1.push_back(i);
        } else if(mp[i] == 2) {
            b++;
            v2.push_back(i);
        } else {
            c++;
            v3.push_back(i);
        }
    }

    int ans = min(a, min(b, c));
    cout << ans << endl;
    for (int i = 0; i < ans; i++) {
        cout << v1[i] << " " << v2[i] << " " << v3[i] << endl;
    }

    return 0;
}