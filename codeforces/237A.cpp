#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    map<pair<int,int>, int> mp;
    for (int i = 0; i < n; i++) {
        int h, m;
        cin >> h >> m;
        mp[{h, m}]++;
    }

    int ans = 0;

    for(auto i: mp) {
        ans = max(i.second, ans);
    }

    cout << ans;

    return 0;
}
