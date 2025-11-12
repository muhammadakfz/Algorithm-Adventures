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

    int n, k; cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    int j = 0, sum = 0;
    map<int, int> mp;    
    for (int i = 0; i < n; i++) {
        mp[a[i]]++;
        while(mp.size() > k) {
            mp[a[j]]--;
            if(mp[a[j]] == 0) mp.erase(a[j]);
            j++;
        }

        // cout << i << " " << j << endl;
        sum += (i-j+1);
    }

    cout << sum << endl;
    
    return 0;
}
