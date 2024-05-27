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

    int a, b, c;
    cin >> a >> b >> c;

    int a1 = sqrt((a*c)/b);
    int b1 = sqrt((a*b)/c);
    int c1 = sqrt((c*b)/a);

    cout << 4 * (a1+b1+c1) << endl;

    return 0;
}