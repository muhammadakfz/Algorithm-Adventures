#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    vector<int> a(k);
    set<int> st;

    for (int i = 0; i < k; i++) {
        cin >> a[i];
        st.insert(a[i]);
    }

    vector<vector<int>> ans(k);

    for (int i = 0; i < k; i++) {
        ans[i].push_back(a[i]);
    }

    vector<int> sisa;
    for (int i = 1; i <= n*k; i++) {
        if(!st.count(i)) {
            sisa.push_back(i);
        }
    }

    int idx = 0;
    for (int i = 0; i < k; i++) {
        while (ans[i].size() < n) {
            ans[i].push_back(sisa[idx++]);
        }
    }

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
