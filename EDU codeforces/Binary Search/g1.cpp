#include <bits/stdc++.h>
#define int long long
using namespace std;

int k, n;
vector<int> a;

bool check(int x) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += min(a[i], x);
    }

    return sum >= k * x;
}

signed main() {   

    cin >> k >> n;

    a.resize(n);

    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    int l = 0, r = sum/k;
    while (l <= r) {
        int mid = (l+r)/2;
        if(check(mid)) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    cout << r << endl;
    return 0;
}
