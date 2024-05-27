#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        if(s == "YES" or s == "Yes" or s == "yes" or s == "YEs" or s == "yEs" or s == "YeS" or s == "yES" or s == "yeS") cout << "YES";
        else cout << "NO";
        cout << endl;
    }

    return 0;
}