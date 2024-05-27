#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<pair<int, int>> range(n);
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        range[i].first = a+b-1;
        range[i].second = a;
    }

    sort(range.begin(), range.end());

    int ans = 1;
    int l = range[0].second, r = range[0].first;
    for (int i = 1; i < n; i++) {
        int L = range[i].second, R = range[i].first;
        if(r < L || l > R) {
            l = L;
            r = R;
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}