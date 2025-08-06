#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int cnt = 0, cnt2 = 0;

    string res = s;
    for (int i = 1; i < n; i++) {
        if (res[i] == res[i - 1]) {
            cnt++;
            for (char c = 'A'; c < 'A' + k; c++) {
                if (c != res[i - 1] && (i + 1 == n || c != res[i + 1])) {
                    res[i] = c;
                    break;
                }
            }
        }
    }

    string res2 = s;
    for (int i = 0; i < n - 1; i++) {
        if (res2[i] == res2[i + 1]) {
            cnt2++;
            for (char c = 'A'; c < 'A' + k; c++) {
                if (c != res2[i + 1] && (i == 0 || c != res2[i - 1])) {
                    res2[i] = c;
                    break;
                }
            }
        }
    }

    if (cnt <= cnt2) {
        cout << cnt << "\n" << res << "\n";
    } else {
        cout << cnt2 << "\n" << res2 << "\n";
    }

    return 0;
}

