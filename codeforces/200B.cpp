#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    double sum = 0;
    for (int i = 0; i < t; i++) {
        int a; cin >> a;
        sum += a;
    }
    
    cout << fixed << sum/t << setprecision(12);

    return 0;
}