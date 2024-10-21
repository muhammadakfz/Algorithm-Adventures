#include <bits/stdc++.h>
using namespace std;

bool cmp (string a, string b) {
    return a.substr(0, 2) < b.substr(0, 2);
}

int main() {

    int n;
    while (cin >> n && n != 0) {
        vector<string> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        stable_sort(a.begin(), a.end(), cmp);
        for (string s: a) {
            cout << s << endl;
        }

        cout << endl;
    }

    return 0;
}