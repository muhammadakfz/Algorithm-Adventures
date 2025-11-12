#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int x1, y1, r1;
    int x2, y2, r2;

    cin >> x1 >> y1 >> r1;
    cin >> x2 >> y2 >> r2;

    int dx = x1 - x2;
    int dy = y1 - y2;
    int distanceSquared = dx * dx + dy * dy;
    int radiusSum = r1 + r2;
    int radiusDiff = abs(r1 - r2);

    if (1LL * radiusDiff * radiusDiff <= distanceSquared and distanceSquared <= 1LL * radiusSum * radiusSum) {
        cout << "bersentuhan\n";
    } else {
        cout << "tidak bersentuhan\n";
    }

    return 0;
}
