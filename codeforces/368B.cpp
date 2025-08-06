#include <bits/stdc++.h>
using namespace std;

const int MAXX = 1e5 + 5;

int main() {

    int n, m;
    cin >> n >> m;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> distinct(n,0);
    vector<bool> udah(MAXX, false);

    int cnt = 0;

    for (int i = n - 1; i >= 0; i--) {
        if (!udah[v[i]]) {
            udah[v[i]] = true;
            cnt++;
        }

        distinct[i] = cnt;
    }

    while (m--) {
        int x;
        cin >> x;
        cout << distinct[x - 1] << endl;
    }

    return 0;
}
