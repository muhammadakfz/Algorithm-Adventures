#include <bits/stdc++.h>
using namespace std;

int main() {

    int m, n;
    cin >> m >> n;

    double sum = 0.0;

    for (int i = 1; i <= m; ++i) {
        double tmp = pow((double)i / m, n);
        double tmp_1 = pow((double)(i - 1) / m, n);
        double cnt = tmp - tmp_1;
        sum += i * cnt;
    }

    cout << fixed << setprecision(12) << sum << endl;

    return 0;
}

