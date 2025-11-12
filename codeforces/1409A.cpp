#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;

        int x = abs(a - b);
        cout << (x + 9) / 10 << endl;
    }

    return 0;
}
