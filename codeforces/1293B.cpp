#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    double sum = 0;
    for(double i = 1.0; i <= n; i++) {
        sum += (double)1/i;
    }

    cout << fixed << setprecision(12) << sum;

    return 0;
}