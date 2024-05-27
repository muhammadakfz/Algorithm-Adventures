#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, k; cin >> n >> k;
    vector<int> arr(n+1), pref(n+1, 0);
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        pref[i] = pref[i-1] + arr[i];
    }
    
    int ans = 1e9, idx;
    for(int i = k; i <= n; i++){
        if(ans > pref[i] - pref[i-k]){
            ans = pref[i] - pref[i-k];
            idx = i-k+1;
        }
    }
    
    cout << idx;

    return 0;
}