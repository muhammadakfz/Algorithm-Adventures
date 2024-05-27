#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
	while(t--){
        int n, k;
		cin >> n >> k;

        vector<int> a(k+1);

		for(int i = 1; i <= k; i++) cin >> a[i];
		int ans = 0;
		for(int i = 1; i <= k; i++){
			if(i == 1){
				ans = max(ans, a[i]);
			}
			if(i == k){
				ans = max(ans, n - a[i] + 1);
			}
			if(i + 1 <= k){
				int len = a[i+1] - a[i] + 1;
				int val = (len + 1) / 2;
				ans = max(ans, val);
			}
		}
		cout << ans << '\n';
	}

    return 0;
}