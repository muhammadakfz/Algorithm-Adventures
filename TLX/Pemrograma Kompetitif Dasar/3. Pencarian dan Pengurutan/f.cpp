#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    vector<string> v;

    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        v.push_back(s);

        sort(v.begin(), v.end());
        int idx = lower_bound(v.begin(), v.end(), s) - v.begin();
        cout << idx + 1 << endl;
    }

    return 0;
}