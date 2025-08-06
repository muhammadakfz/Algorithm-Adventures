#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {

    string s;
    cin >> s;

    int n = s.size();
    vector<set<int>> dp(n);

    dp[0].insert(stoll(s.substr(0, 1)));

    for (int i = 1; i < n; i++) {
        int cur = stoll(s.substr(0, i + 1));
        dp[i].insert(cur);

        for (int j = 0; j < i; j++) {
            int new_num = stoll(s.substr(j + 1, i - j));
            for (auto x : dp[j]) {
                dp[i].insert(x + new_num);
                dp[i].insert(x - new_num);
            }
        }
    }

    cout << dp[n - 1].size() << endl;

    

    return 0;
}
