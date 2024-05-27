#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m; cin >> n >> m;
    int d; cin >> d; 

    int k = n*m;
    int arr[k];
    bool check = true;

    for (int i = 0; i < k; i++) cin >> arr[i];

    sort(arr, arr+k);
    for (int i = 1; i < k; i++) {
        if((arr[i]-arr[i-1])%d != 0) {
            check = false;
            break;
        }
    }     
    
    int ans = 0;
    if(!check) cout << "-1\n";
    else {
        for (int i = 0; i < k; i++) ans += abs((arr[i]-arr[k/2])/d);
        cout << ans << "\n";
    }

    return 0;
}