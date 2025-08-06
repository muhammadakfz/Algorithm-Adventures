#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    if (n >= 0) cout << n << endl;
    else {
        int abs_n = -n;
        string str = to_string(abs_n);
        int len = str.length();

        if (len == 1) {
            cout << 0 << endl;
        } else {
            string option1 = str.substr(0, len - 2) + str[len - 1];
            string option2 = str.substr(0, len - 1);
            int result1 = stoi(option1);
            int result2 = stoi(option2);
            cout << min(result1, result2) * -1 << endl;
        }
    }

    return 0;
}
