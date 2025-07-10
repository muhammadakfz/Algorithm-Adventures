#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        bool left = false, right = false, up = false, down = false;
        for (int j = 0; j < n; j++) {
            if (x[j] < x[i] && y[j] == y[i]) left = true;
            if (x[j] > x[i] && y[j] == y[i]) right = true;
            if (x[j] == x[i] && y[j] < y[i]) down = true;
            if (x[j] == x[i] && y[j] > y[i]) up = true;
        }

        if (left and right and up and down) ans++;
    }

    cout << ans << endl;

    return 0;
}