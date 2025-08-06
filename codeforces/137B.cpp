#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    map<int, int> a;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        a[x]++;
    }
    
    int cnt = 0;
    for (auto it = a.begin(); it != a.end(); it++) {
        if (it->second > 1 and it->first <= n) {
            cnt += it->second - 1;
        } else if (it->second >= 1 and it->first > n) {
            cnt += it->second;
        }
    }

    cout << cnt << endl;

}
