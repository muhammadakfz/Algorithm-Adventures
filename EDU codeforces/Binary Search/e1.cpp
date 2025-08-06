#include <bits/stdc++.h>
using namespace std;

bool f(double x, double c) {
    return (x * x) + sqrt(x) <= c;
}

int main() {

    double c;
    cin >> c;

    double l = 0, r = 1e9;
    for (int i = 0; i < 100; i++) {
        double m = (l + r) / 2.0;
        if (f(m, c)) {
            l = m;
        } else {
            r = m;
        }
    }

    cout << fixed << setprecision(20) << l << endl;


    return 0;
}
