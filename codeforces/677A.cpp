#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, h, cnt = 0;
    cin >> n >> h;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if(x > h) cnt++;
    }

    cout << n + cnt << "\n";

    return 0;
}