#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    string s; cin >> s;
    
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    map<char, bool> mp;
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(mp[s[i]]) continue;
        mp[s[i]] = true;
        ans++;
    }
    if(ans >= 26) cout << "YES";
    else cout << "NO";

    return 0;
}