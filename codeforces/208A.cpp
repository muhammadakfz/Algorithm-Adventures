#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    string s1;
    int n = s.size();
    bool flag = 1;
    for (int i = 0; i < n; i++) {
        if(s[i] == 'W' and s[i+1] == 'U' and s[i+2] == 'B') {
            if(!flag) cout << " ";
            flag = 1;
            i+=2;
        } else {
            flag = 0;
            cout << s[i];
        }
    }   

    cout << s1 << endl;
    

    return 0;
}
