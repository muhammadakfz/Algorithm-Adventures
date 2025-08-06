#include <bits/stdc++.h>
using namespace std;

int main() {

    int x, y, a, b;
    cin >> x >> y >> a >> b;
    vector<pair<int, int>> points;

    for (int i = a; i <= x; i++) {
        for (int j = b; j <= y; j++) {
            if (i > j) {
                points.push_back({i, j});
            }
        }
    }

    cout << points.size() << endl;
    for (const auto& point : points) {
        cout << point.first << " " << point.second << endl;
    }

    return 0;
}
