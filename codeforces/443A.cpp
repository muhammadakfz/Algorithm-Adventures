#include <bits/stdc++.h>
using namespace std;

int main() {

    string s; 
    getline(cin, s);
    set<char> st;

    int n = s.size();
    for (int i = 1; i < n-1; i++) {
        if(s[i] == ',' or s[i] == ' ') continue;
        st.insert(s[i]);   
    }

    cout << st.size();

    return 0;
}