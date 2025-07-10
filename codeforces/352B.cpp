#include <bits/stdc++.h>
using namespace std;

int main() {    int n;
    cin >> n;
    vector<int> a(n);
    map<int, vector<int>> pos;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        pos[a[i]].push_back(i);
    }

    vector<pair<int, int>> ans;
    
    for (auto& p : pos) {
        int value = p.first;
        vector<int>& pos = p.second;
        
        if (pos.size() == 1) {
            ans.push_back({value, 0});
        } else {
            int diff = pos[1] - pos[0];
            bool isAP = true;
            
            for (int i = 2; i < pos.size(); i++) {
                if (pos[i] - pos[i-1] != diff) {
                    isAP = false;
                    break;
                }
            }
            
            if (isAP) {
                ans.push_back({value, diff});
            }
        }
    }

    cout << ans.size() << endl;
    for (auto& r : ans) {
        cout << r.first << " " << r.second << endl;
    }

    return 0;
}