#include <bits/stdc++.h>
using namespace std;

int main() {

    string s1, s2; cin >> s1 >> s2;
    string s3 = s1, s4 = s2;

    if(s1.size() != s2.size()) {
        cout << "NO\n";
        return 0;
    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    int cnt = 0; 
    if(s1 == s2) {
        for (int i = 0; i < s1.size(); i++) {
            if(s3[i] != s4[i]) cnt++;
        }

        if(s1 == s2 and cnt <= 2) cout << "YES\n";
        else cout << "NO\n";
    }
    else cout << "NO";

    return 0;
}