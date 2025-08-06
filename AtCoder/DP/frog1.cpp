#include <bits/stdc++.h>
#define int long long
using namespace std;

int a[100001], dp1[100001];

int dp(int i) {
    if (dp1[i] != -1) return dp1[i];
    if (i == 0) return 0;
    if (i == 1) return abs(a[1] - a[0]);
    return dp1[i] = min(dp(i - 1) + abs(a[i] - a[i - 1]), dp(i - 2) + abs(a[i] - a[i - 2]));
}


signed main() {

    int n;
    cin >> n;

    memset(dp1,-1,sizeof(dp1));
    
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << dp(n-1) << endl;


    return 0;
}
