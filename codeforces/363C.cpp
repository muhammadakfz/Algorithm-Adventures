#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    while (true) {
        string res = "";
        for (auto c: s) {
            res += c;
            int len = res.size();
            if (len >= 3 && res[len - 1] == res[len - 2] && res[len - 2] == res[len - 3]) {
                res.pop_back();
            } else if (len >= 4 && res[len - 1] == res[len - 2] && res[len - 3] == res[len - 4]) {
                res.pop_back();
            }
        }

        if (res == s) break;
        s = res;
    }

    cout << s << endl;



    return 0;
}
