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
 
    int n, s; cin >> n >> s;
    int a[n];
 
    for (int i = 0; i < n; i++) cin >> a[i];
 
    int sum = 0, j = 0, res = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        while(sum > s) {
            sum -= a[j];
            j++;
        } res += (i-j+1);
    } cout << res << endl;
 
    return 0;
}