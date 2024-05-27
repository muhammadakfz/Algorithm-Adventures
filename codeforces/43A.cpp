#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    map<string, int> mp;

    while(n--) {
        string s; cin >> s;
        mp[s]++;
    }

    string ans;
    int tmp = 0;

    for(auto i: mp) {
        if(i.second > tmp) {
            ans = i.first;
        } tmp = i.second;
    }

    cout << ans << endl;

    return 0;
}