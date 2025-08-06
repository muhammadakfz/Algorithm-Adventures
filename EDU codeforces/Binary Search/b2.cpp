#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

vector<double> a;

bool f(double x, int k) {
    int sum = 0;
    for (int i = 0; i < a.size(); i++) {
        sum += int(a[i] / x);
    }

    return sum >= k;
}

int main() {

    int n, k;
    cin >> n >> k;

    a.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    double l = 0, r = *max_element(a.begin(), a.end());
    for (int i = 0; i < 100; i++) {
        double mid = (l+r)/2.0;
        if (f(mid, k)) {
            l = mid;
        } else {
            r = mid;
        }
    }

    cout << fixed << setprecision(6) << l << endl;


    return 0;
}
