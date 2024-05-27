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

    string s, tmp;
    cin >> s >> tmp;

    while(s.find(tmp) != string::npos) {
        s.erase(s.find(tmp), tmp.length());
    }

    cout << s << "\n";

    return 0;
}