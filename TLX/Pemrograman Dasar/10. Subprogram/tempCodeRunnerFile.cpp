#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORI(i, a, b) for (int i = (a); i <= (b); i++)
#define io_i ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int f(int n) {
    for(int i = 2; i*i <= n; i++) {
        if(n%i==0) {
            return false;
        }
    } 

    return true;
}

signed main() {
    io_i;

    int n; cin >> n;
    int m = 2;
    bool flag = true;   

    while(n > 1) {
        while(!f(m)) m++;

        int b = 0;
        while(n%m == 0) {
            b++;
            n/=m;
        }

        if(b > 0) {
            if(flag) {
                flag = false;
                if (b > 1) cout << m << '^' << b;
                else cout << m;
            } else {
                cout << " x ";
                if (b > 1) cout << m << '^' << b;
                else cout << m;
            }
        } m++;
    } 

    return 0;
}