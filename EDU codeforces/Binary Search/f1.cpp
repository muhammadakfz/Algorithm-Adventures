#include <bits/stdc++.h>
using namespace std;

string t, s;
vector<int> a;
vector<bool> del;

bool check(int x) {
    fill(del.begin(), del.end(), false);
    int i = 0;
    for (int j = 0; j < x; j++) {
        del[a[j]-1] = true;
    }

    for (int j = 0; j < t.size(); j++) {
        if (del[j]) continue;
        if (t[j] == s[i]) i++;
        if (i == s.size()) {
            return true;
        }
    }
    
    return false;
}

int main() {

    cin >> t >> s;

    int n = t.size(), m = s.size();

    a.resize(n);
    del.resize(n, false);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int l = 0, r = n;
    while(l <= r) {
        int mid = (l+r)/2;
        if (check(mid)) {
            l = mid+1;
        } else {
            r = mid-1;
        }
    }
    
    cout << r << endl;

    return 0;
}
