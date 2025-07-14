#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    unordered_map<char, int> charCount;   
    for (char c : s) {
        charCount[c]++;
    }

    int oddCount = 0;
    for (const auto& pair : charCount) {
        if (pair.second % 2 != 0) {
            oddCount++;
        }
    }

    if (oddCount > 1) cout << "NO SOLUTION" << endl;
    else {
        string ans = "";
        char oddChar = ' ';
        for (const auto& pair : charCount) {
            if (pair.second % 2 != 0) {
                oddChar = pair.first; 
            }
            ans += string(pair.second / 2, pair.first); 
        }

        string reversedAns = ans;
        reverse(reversedAns.begin(), reversedAns.end());
        if (oddCount == 1) {
            ans += oddChar; 
        }

        cout << ans + reversedAns << endl;
    }

    return 0;
}
