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
    string s; cin >> s;
    set<char> st;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        st.insert(s[i]);
        cnt++;
        if(st.size() == 3) break;
    } 

    cout << cnt << endl;    

    return 0;
}