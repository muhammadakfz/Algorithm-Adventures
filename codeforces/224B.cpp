#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    int j = 0, ans = INT_MAX;
    int L = -1, R = -1;
    map<int, int> mp;
    
    for (int i = 0; i < n; i++) {
        mp[a[i]]++;
        
        while (mp.size() > k) {
            mp[a[j]]--;
            if (mp[a[j]] == 0) {
                mp.erase(a[j]);
            }
            j++;
        }
        
        if (mp.size() == k) {
            while (mp[a[j]] > 1) {
                mp[a[j]]--;
                j++;
            }
            
            if (i - j + 1 < ans) {
                ans = i - j + 1;
                L = j + 1;
                R = i + 1;
            }
        }
    }
    
    if (L == -1) {
        cout << "-1 -1" << endl;
    } else {
        cout << L << " " << R << endl;
    }
    
    return 0;
}
