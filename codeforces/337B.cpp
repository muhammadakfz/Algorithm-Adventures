#include <bits/stdc++.h>
using namespace std;

int __gcd(int a, int b) {
    if (b == 0) return a;
    return __gcd(b, a % b);
}

int main() {

    int a, b, c, d;
    int p, q;
    cin >> a >> b >> c >> d;
    if (a * d <= b * c) {
        p = b * c - a * d;
        q = b * c;
    } else {
        // height-fit
        p = a * d - b * c;
        q = a * d;
    }

    int g = __gcd(p, q);
    p /= g;
    q /= g;

    cout << p << "/" << q << endl;
    return 0;
}
