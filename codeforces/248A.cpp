#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;

    vector<pair<int, int>> v(n+1);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first;
        cin >> v[i].second;
    }

    int a = 0, b = 0, c = 0, d = 0;
    for (int i = 0; i < n; i++) {
        if(v[i].first == 0) a++;
        else b++;

        if(v[i].second == 0) c++;
        else d++;
    }

    int ans = min(a, b) + min(c, d);
    cout << ans << endl;
    
    
    return 0;
}