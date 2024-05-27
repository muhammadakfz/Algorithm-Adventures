#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    string s;
    set<char> st;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for(auto i: s) {
            st.insert(i);
        }
    }

    if(st.size() == 2) cout << "YES";
    else cout << "NO";
    

    return 0;
}