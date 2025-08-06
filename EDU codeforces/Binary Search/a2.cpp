#include <bits/stdc++.h>
#define int unsigned long long
using namespace std;

bool f(int a, int b, int x, int n) {
    if (a == 0 || b == 0) return false;
    return ((x/a) * (x/b)) >= n;
}

signed main() {

    int n, w, h;
    cin >> w >> h >> n; 

    int l = 0, r = 10e18;
    while (l+1 < r) {
        int mid = (l + r)/2;
        if(f(w,h,mid,n)) r = mid;
        else l = mid;
    }

    cout << r << endl;



    return 0;
}
