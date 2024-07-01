#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    int n = s.size();
    
    int max_freq = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        if(s[i] == s[i+1]) max_freq++;
        else max_freq = 0;
        ans = max(ans, max_freq);
    }

    cout << ans+1 << endl;

    return 0;
}