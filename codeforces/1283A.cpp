#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        a += 1;

        cout << (24-a)*60 + (60-b) << endl;
    }

    return 0;
}