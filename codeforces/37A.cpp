#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    set<int> st;
    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.insert(x);
        mp[x]++;
    }

    int max = 0;
    for (auto it = mp.begin(); it != mp.end(); it++) {
        if (it->second > max) max = it->second;
    }

    cout << max << " " << st.size() << endl;
    

    return 0;
}