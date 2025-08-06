#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, g, b;
    cin >> r >> g >> b;

    int ans = 0;
    for (int mix = 0; mix <= 2; ++mix) {
        if (r >= mix && g >= mix && b >= mix) {
            int rr = r - mix;
            int gg = g - mix;
            int bb = b - mix;

            int sum = mix + rr/3 + gg/3 + bb/3;
            ans = max(ans, sum);
        }
    }

    cout << ans << endl;
}

