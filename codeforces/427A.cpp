#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    int cur = 0, cnt = 0;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if(x == -1) {
            if(cur == 0) cnt++;
            else cur--;
        } else cur += x;
    }

    cout << cnt << endl;

    return 0;
}