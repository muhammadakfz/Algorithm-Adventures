#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    int cnt = 0;

    int x = 1, y = n*n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j+=2) {
            cout << x << " " << y << " ";
            x++, y--;
        } cout << endl;
    }
    

    return 0;
}