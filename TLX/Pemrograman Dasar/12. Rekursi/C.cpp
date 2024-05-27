#include <bits/stdc++.h>
using namespace std;

int a, b, k, d;
int f(int x, int y) {
    if(y == 0) return x;
    else return abs(a*f(x, y-1) + b);
}

int main() {

    cin >> a >> b >> k >> d;
    cout << f(d, k) << endl;

    return 0;
}