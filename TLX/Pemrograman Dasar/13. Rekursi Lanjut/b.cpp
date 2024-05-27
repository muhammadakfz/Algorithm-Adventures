#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORI(i, a, b) for (int i = (a); i <= (b); i++)
#define io_i ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void f(int n) {
    if(n > 0) {
        f(n-1);
        for (int i = 0; i < n; i++) {
            cout << "*";
        } cout << "\n";
        f(n-1);
    }
}

signed main() {
    io_i;

    int n; 
    cin >> n;
    f(n);

    return 0;
}