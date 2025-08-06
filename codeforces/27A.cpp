#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    bitset<100000> a;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[x] = 1;
    }

    for (int i = 1; i < a.size(); i++) {
        if (!a[i]) {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}
