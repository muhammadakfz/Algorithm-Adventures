#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    string s1, s2, s3; 
    cin >> s1 >> s2 >> s3;

    unordered_map<char, char> m;
    unordered_set<char> s;
    for (int i = 0; i < n; i++) {
        char c1 = s1[i], c2 = s2[i];
        if(m.find(c2) == m.end()) {
            if(s.find(c1) != s.end()) {
                cout << "Pak Dengklek bingung" << endl;
                return 0;
            }
            m[c2] = c1;
            s.insert(c1);
        } else if (m[c2] != c1){
            cout << "Pak Dengklek bingung" << endl;
            return 0;
        }
    }

    string decode = "";
    for (char c: s3) {
        if(m.find(c) != m.end()) {
            decode += m[c];
        } else {
            decode += '?';
        }
    }

    cout << decode << endl;

    return 0;
}