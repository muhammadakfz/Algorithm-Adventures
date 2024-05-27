#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORI(i, a, b) for (int i = (a); i <= (b); i++)
#define io_i                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

signed main()
{
    io_i;

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;

        int cnt = 0, ans = 0;
        for (int i = 0; i < n; i++) {
            if(s[i] == '(') cnt++;
            else {
                cnt--;
                if(cnt < 0) {
                    cnt = 0;
                    ans++;
                }
            }   
        }

        cout << ans << endl;
    }


    /*
    4
    2
    )(
    4
    ()()
    8
    ())()()(
    10
    )))((((())

    */

    return 0;
}