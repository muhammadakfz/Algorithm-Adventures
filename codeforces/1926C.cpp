#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MAXX = 2e5;

vector<int> a(MAXX + 1, 0);

int sum(int n) {
    int res = 0;
    while (n > 0) {
        res += n % 10;
        n /= 10;
    }

    return res;
}

signed main() {

    for (int i = 1; i <= MAXX; i++) a[i] = a[i - 1] + sum(i);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << a[n] << endl;
    }


    return 0;
}