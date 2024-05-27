#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;
    while(t--) {
        string s, t;
        cin >> s >> t;

        int n = s.size();
        int m = t.size();

        int a = lcm(n, m) / n;
        int b = lcm(n, m) / m;


        string x = "", y = "";

        for (int i = 0; i < a; i++) x += s;
        for (int i = 0; i < b; i++) y += t;

        if(x == y) cout << x << endl;
        else cout << -1 << endl;
    }

    return 0;
}