#include <bits/stdc++.h>
#define int long long
using namespace std;

int f(int x, vector<int> dp) {
    if(x < 1) return x == 0 ? 1:0;
    string s = to_string(x);

    int cur = 0;
    for (int i = 0; i < s.size(); i++) cur += dp[i];

    int p = 0;
    for (int i = 0; i < s.size(); i++) {
        int digit = s[i] - '0';
        int diff = s.size() - i - 1;
        int below = p < digit ? digit - 1 : digit;
        cur += (digit == 0) ? 0 : below * dp[diff];
        if (digit == p)
            return cur;
        p = digit;
    }

    return cur + 1;
}

signed main() {

    int a, b;
    cin >> a >> b;

    vector<int> dp(19);
   
    dp[0] = 1;
    int res = 1;

    for (int i = 1; i < 19; i++) {
        res *= 9;
        dp[i] = res;
    }

    cout << f(b, dp) - f(a - 1, dp) << endl;

    return 0;
}