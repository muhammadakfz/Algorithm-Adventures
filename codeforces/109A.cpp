#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int b = -1, a = -1;

    if (n == 4 || n == 7) {
        cout << n << endl;
        return 0;
    }

    for (int i = 0; i <= n/4; i++) {
        int tmp = i * 4;
        if ((n - tmp) % 7 == 0) {
            a = i;
            b = (n - tmp) / 7;
            break;
        }
    }

    if (b == -1 && a == -1) {
        cout << -1 << endl;
        return 0;
    }

    string s;
    for (int i = 0; i < a; i++) s += "4";
    for (int i = 0; i < b; i++) s += "7";

    cout << s << endl;


    return 0;
}
