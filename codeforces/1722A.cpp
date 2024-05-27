#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        int n;
        string s, tmp = "Timur";
        cin >> n >> s;
        sort(s.begin(), s.end());
        sort(tmp.begin(), tmp.end());
        if(s.size() == 5) {
            if(s == tmp) cout << "YES\n";
            else cout << "NO\n";
        } else cout << "NO\n";
    }

    return 0;
}