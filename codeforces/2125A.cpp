#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;

        map<char, int> freq;
        for (char i : s) freq[i]++;

        string ans;
        
        ans.append(freq['T'], 'T');
        ans.append(freq['N'], 'N');
        ans.append(freq['F'], 'F');

        for (auto &[x, y] : freq) {
            if (x != 'F' && x != 'N' && x != 'T') ans.append(y, x);
        }
        if (ans.find("FFT") != string::npos || ans.find("NTT") != string::npos) {
            ans.clear();
            ans.append(freq['F'], 'F');
            ans.append(freq['N'], 'N');
            ans.append(freq['T'], 'T');
            
            for (auto &[x, y] : freq) {
                if (x != 'F' && x != 'N' && x != 'T') ans.append(y, x);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}