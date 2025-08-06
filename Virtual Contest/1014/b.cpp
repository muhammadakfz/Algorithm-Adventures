#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // map<char, int> freq1, freq2;
        string s1, s2;

        cin >> s1 >> s2;

        int a_1 = 0, a_0 = 0;
        int b_1 = 0, b_0 = 0;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                if (s1[i] == '1') a_1++;
                if (s2[i] == '0') b_0++;
            } else {
                if (s1[i] == '1') a_0++;
                if (s2[i] == '0') b_1++;
            }
        }
        
        bool flag1 = a_1 <= b_1;
        bool flag2 = a_0 <= b_0;

        (flag1 && flag2) ? cout << "YES\n" : cout << "NO\n";

        // cout << freq1[0] << " " << freq1[1] << " " << freq2[0] << " " << freq2[1] << "\n";
    }

    return 0;
}
