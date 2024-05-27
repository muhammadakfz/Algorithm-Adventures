#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];

    vector<int> b = a;
    sort(b.begin(), b.end());

    int l = 0, r = n-1;
    while (l < n && a[l] == b[l]) l++;
    while (r >= 0 && a[r] == b[r]) r--;

    if (l > r) {
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
    } else {
        reverse(a.begin()+l, a.begin()+r+1);
        if (a == b) {
            cout << "yes" << endl;
            cout << l+1 << " " << r+1 << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}