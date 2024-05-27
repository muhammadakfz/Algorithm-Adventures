#include <bits/stdc++.h>
using namespace std;

int reverse(int x) {
    int tmp = x;
    int ret = 0;
    while(tmp > 0) {
        ret = (ret*10) + (tmp%10);
        tmp /= 10;
    } 

    return ret;
}

int main() {
    int a, b; cin >> a >> b;
    a = reverse(a), b = reverse(b);
    cout << reverse(a+b) << endl;

    return 0;
}