#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    int a = 0, b = 0;
    while (n--) {
        int x, y; cin >> x >> y;
        if (x > y) a++;
        else if (x < y) b++;
    }

    if(a > b) cout << "Mishka" << endl;
    else if (a < b) cout << "Chris" << endl;
    else cout << "Friendship is magic!^^" << endl;

    return 0;
}