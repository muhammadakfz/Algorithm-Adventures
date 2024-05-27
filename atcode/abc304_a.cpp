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
    vector<pair<string,int>> v(n);

    int mx = 1e9;
    string mn = "";
    int tmp = 0;

    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        int num; cin >> num;
        v[i] = {s, num};

        if (num < mx) {
            mx = num;
            mn = s;
            tmp = i;
        }
    }

    for (int i = tmp; i < n; i++) {
        cout << v[i].first << "\n";
    }

    if(tmp != 0) {
        for (int i = 0; i < tmp; i++) {
            cout << v[i].first << "\n";
        }
    }
    

    return 0;
}