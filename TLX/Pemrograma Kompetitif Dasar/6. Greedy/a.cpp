#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, b;
    cin >> n >> b;
    int h[n];
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    sort(h, h+n, greater<int>());

    int i = 0;
    while(b > 0) {
        b -= h[i];
        i++;
    }

    cout << i << endl;

    return 0;
}

