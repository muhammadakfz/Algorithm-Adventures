#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n;
    cin >> n;
    vector<int> v1(n), v2(n);

    for(int i = 0; i < n; i++) cin >> v1[i]; 
    for(int i = 0; i < n; i++) cin >> v2[i];

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    int ans = 0;

    int i1 = 0, i2 = 0;
    int j1 = n-1, j2 = n-1;
    while(n--) {
        if(v1[i1] * v2[j2] <= v1[j1] * v2[i2]) {
            ans += v1[i1] * v2[j2];
            i1++;
            j2--;
        } else {
            ans += v1[j1] * v2[i2];
            i2++;
            j1--;
        }
    } 

    cout << ans << endl;

    return 0;
}