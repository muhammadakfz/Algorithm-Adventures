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

    string s; cin >> s;
    int k; cin >> k;

    int n = s.size();
    for (int i = 0; i < n; i++) {
        int tmp = s[i] - 'a';
        int cur = (tmp + k) % 26;
        s[i] = cur + 'a';
    }

    cout << s << endl;    

    return 0;
}