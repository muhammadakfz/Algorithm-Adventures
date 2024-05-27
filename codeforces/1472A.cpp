#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> v(n);
        map<int, int> mp;
        int sum = 0;

        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            v[i] = x;
            mp[x]++;
        }

        if(n % 2 == 1) cout << "NO\n";
        else {
            bool flag = true;
            for(int i = 0; i < n; i++) {
                if(mp[v[i]] % 2 == 1) {
                    flag = false;
                    break;
                }
            }
            if(flag) cout << "YES\n";
            else cout << "NO\n";
        }
    }

    return 0;
}