#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, tmp = "hello";
    cin >> s;

    int n = s.size(), idx = 0;
    for (int i = 0; i < n; i++) {
        if(s[i] == tmp[idx]) idx++;
    }
    
    if(idx == 5) cout << "YES";
    else cout << "NO";

    return 0;
}