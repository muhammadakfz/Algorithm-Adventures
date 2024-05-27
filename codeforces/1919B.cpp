#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '+') sum++;
            else sum--;
        }

        cout << abs(sum) << endl;
    }

    return 0;
}