#include <bits/stdc++.h>
#define int long long
using namespace std;

int main() {

    int k;
    cin >> k;

    string s;
    cin >> s;

    int n = s.size();

    int l = 0, r = 0;
    int cnt = 0;

    map<int,int> freqOne;
    vector<int> pref(n+1, 0);

    int ans = 0;
    freqOne[0] = 1;

    for (int i = 0; i < n; i++) {
        if(i > 0) pref[i] = pref[i-1] + (s[i] == '1');
        else pref[i] = (s[i] == '1');

        ans += freqOne[pref[i] - k];
        freqOne[pref[i]]++;
    }

    cout << ans << endl;
    
    return 0;
}
