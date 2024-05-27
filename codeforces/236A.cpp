#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    set<char> st;
    
    int n = s.size();
    for (int i = 0; i < n; i++) {
        st.insert(s[i]);
    }

    n = st.size();
    if(n&1) cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";

    return 0;
}