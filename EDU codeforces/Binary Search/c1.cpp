#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, x, y;

bool f(int x, int y, int t) {
    if (t < min(x, y)) return false;
    
    int cnt = 1;
    t -= min(x, y);

    cnt += t/x + t/y;
    return cnt >= n;
}

signed main() {

    cin >> n >> x >> y;

    int l = 0, r = max(x, y) * n;
    while (l+1 < r) {
        int mid = (l+r)/2;
        if (f(x, y, mid)) r = mid;
        else l = mid;
    }

    cout << r << endl;


    return 0;
}
