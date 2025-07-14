#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, sum;
int ans = INT_MAX;
vector<int> a;

void dfs(int i, int tmp) {
    if (i == n) {
        int tmp2 = sum - tmp;
        ans = min(ans, abs(tmp - tmp2));
        return;
    } 

    dfs(i + 1, tmp + a[i]);
    dfs(i + 1, tmp);
}

signed main() {

    cin >> n;
    
    a.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    dfs(0, 0);
    cout << ans << endl;

    return 0;
}
