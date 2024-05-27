#include <bits/stdc++.h>
using namespace std;

int main() {

    int y; cin >> y;
    while(true) {
        y++;
        int a, b, c, d;
        a = y/1000;
        b = y/100 % 10;
        c = y/10 % 10;
        d = y%10;

        if(a != b and b != c and c != d and a != c and a != d and b != d) {
            cout << y << endl;
            break;
        }
    }

    return 0;
}