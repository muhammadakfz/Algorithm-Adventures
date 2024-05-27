#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    string s = "I hate ";
    string t = "I love ";
    string u = "that ";
    string v = "it";

    for(int i = 1; i <= n; i++) {
        if(i % 2 == 1) {
            cout << s;
        } else {
            cout << t;
        }

        if(i != n) {
            cout << u;
        }
    }

    cout << v << "\n";

    return 0;
}