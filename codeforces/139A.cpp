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

    int n; cin >> n;
    int week[8];
    for (int i = 1; i <= 7; i++) cin >> week[i];
    
    int cnt = 1, ans;
    while(n>0) {
        if(cnt % 7 != 0) n -= week[cnt%7];
        else n -= week[7];
        ans = cnt;
        cnt++;
    } 

    if(ans % 7 == 0) cout << 7 << endl;
    else cout << ans%7 << endl;

    return 0;
}