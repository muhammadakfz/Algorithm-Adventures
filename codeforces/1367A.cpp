#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        string s; cin >> s;
        int n = s.size();

        string str = "";
        str += s[0];
        str += s[1];
        for (int i = 3; i < n; i+=2) str += s[i];
        cout << str << endl;
                
    }

    return 0;
}