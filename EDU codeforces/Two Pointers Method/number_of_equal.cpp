#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORI(i, a, b) for (int i = (a); i <= (b); i++)
#define io_i ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int M = 1e9;

signed main() {
    io_i;

    int n, m;
    cin >> n >> m;
    map<int, int> a, b;
    int sum = 0, x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a[x]++;
    }      

    for (int i = 0; i < m; i++) {
        cin >> x;
        sum += a[x];
    }

    cout << sum << endl;  
    
    
    return 0;
}