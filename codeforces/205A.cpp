#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int mn = *min_element(a.begin(), a.end());
    int cnt = 0, idx = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == mn) {
            cnt++;
            if (idx == -1) idx = i + 1;
        }
    }

    if (cnt > 1) {
        cout << "Still Rozdil" << endl;
    } else {
        cout << idx << endl;
    }

    return 0;
}