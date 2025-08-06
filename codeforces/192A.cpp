#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> s;
    bool flag = false;
    
    for (int i = 1; (i * (i + 1)) / 2 <= n; i++) {
        int cur = (i * (i + 1)) / 2;
        s.insert(cur);
        if (n - cur > cur) continue;
        if (s.find(n - cur) != s.end()) {
            flag = true;
            break;
        }
    }

    cout << (flag ? "YES" : "NO") << endl;
    return 0;
}

