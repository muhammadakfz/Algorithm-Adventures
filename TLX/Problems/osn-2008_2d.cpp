#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        cnt += i;
        cout << cnt << endl;
    }

    return 0;
}