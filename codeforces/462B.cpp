#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int n, k; cin >> n >> k;
    string s; cin >> s;
    map<char,int> mp;

    for (int i = 0; i < n; i++) {
        mp[s[i]]++;
    }   

    vector<int> v;

    for (auto x: mp) {
        v.push_back(x.second);
    }

    sort(v.rbegin(), v.rend());

    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        // cout << k << endl;
        if(k - v[i] >= 0) {
            sum += pow(v[i], 2);
            k -= v[i];
        } else if(k - v[i] < 0) {
            sum += pow(k, 2);
            k = 0;
            // cout <<ye sum << endl;
        } 
        
        if(k == 0) {
            break;
        }
    }         

    cout << sum << endl; 

    return 0;
}