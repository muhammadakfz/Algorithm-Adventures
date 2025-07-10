#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    long long time = 0;
    int pos = 1;
    for (int i = 0; i < m; i++) {
        if (a[i] >= pos) {
            time += a[i] - pos;
        } else {
            time += n - (pos - a[i]);
        }
        pos = a[i];
    }

    cout << time << endl;
    return 0;
}