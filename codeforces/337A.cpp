#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{

    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int ans = 1e18;
    for (int i = 0; i + n - 1 < m; i++)
    {
        ans = min(ans, v[i + n - 1] - v[i]);
    }
    cout << ans;

    return 0;
}