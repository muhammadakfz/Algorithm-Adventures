#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int cap = 0, cur = 0, a, b;
    
    while(n--) {
        cin >> a >> b;
        cur -= a;
        cur += b;
        if(cur > cap) cap = cur;
    }

    cout << cap;

    return 0;
}