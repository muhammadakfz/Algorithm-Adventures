#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORI(i, a, b) for (int i = (a); i <= (b); i++)
#define io_i ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

signed main() {
    io_i;

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        
        vector<int> ans;
        ans.push_back(v[0]);
        for (int i = 1; i < n; i++) {
            if(v[i-1] > v[i]) ans.push_back(1);
            ans.push_back(v[i]);
        }
        
        cout << ans.size() << "\n";
        for(auto i: ans) cout << i << " ";
        cout << "\n";
    }

    return 0;
}