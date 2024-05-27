#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        
        unordered_map<char, int> m;
        set<char> st;
        for (int i = 0; i < s.size(); i++) {
            m[s[i]]++;
            st.insert(s[i]);
        }

        int cnt = 0;
        for (auto i : st) {
            if(m[i] > 1) cnt++;
        }

        if(cnt > 1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
    


    return 0;
}