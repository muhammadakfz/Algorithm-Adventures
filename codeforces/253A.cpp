#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, m;
    cin >> n >> m;

    char f = 'B', g = 'G';
    if (n < m) {
        swap(n, m);
        swap(f, g);
    }

    string s;
    while (n > 0 and m > 0) {
        s += f;
        s += g;
        n--;
        m--;
    }

    while (n > 0) {
        s += f;
        n--;
    }

    while (m > 0) {
        s += g;
        m--;
    }

    cout << s << endl;
    return 0;
}
