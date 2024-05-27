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
        bool flag = 0;
        while(n > 0) {
            if(n % 11 == 0 || n%111 == 0) {
                cout << "YES\n";
                flag = 1;
                break;
            } n -= 111;
        }

        if(!flag) cout << "NO\n";
    }

    return 0;
}