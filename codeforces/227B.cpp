#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORI(i, a, b) for (int i = (a); i <= (b); i++)
#define io_i ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int f(int n) {
    if(n == 0) return 1;
    if(n == 1) return 1;
    else return (n * f(n-1));
}

signed main() {
    io_i;

    int n; 
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int vasya = 0, petya = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(a[i] != b[j]) vasya++; 
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = n-1; j >= 0 ; j--) {
            if(b[i] != a[j]) petya++; 
        }
    }

    cout << vasya << " " << petya;
    

    return 0;
}