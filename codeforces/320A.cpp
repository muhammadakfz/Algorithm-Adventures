#include <bits/stdc++.h>
using namespace std;

int main() {

    string s; cin >> s;
    int n = s.size();

    for (int i = 0; i < n; i++) {
        if(s[i] == '1' and s[i+1] == '4' and s[i+2] == '4') i+=2;
        else if(s[i] == '1' and s[i+1] == '4') i++;
        else if(s[i] == '1') continue;
        else {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}