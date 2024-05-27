#include <bits/stdc++.h>
using namespace std;

int main() {

    string s; cin >> s;
    int n  = s.size();

    vector<char> v;

    for (int i = 0; i < n; i++) {
        s[i] = tolower(s[i]);
        if(s[i] != 'i' and s[i] != 'a' and s[i] != 'u' and s[i] != 'e' and s[i] != 'o' and s[i] != 'y') {
            v.push_back(s[i]);
        }
    }
    
    n = v.size();
    int j = 0;
    for (int i = 0; i < 2*n; i++) {
        if(i&1) {
            cout << v[j];
            j++;}
        else {
            cout << '.';
        }
    }
    
    return 0;
}