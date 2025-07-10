#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int min_diff = abs(a[0] - a[n-1]);
    int idx1 = 1, idx2 = n; 
    for (int i = 0; i < n-1; i++) {
        int diff = abs(a[i] - a[i+1]);
        if (diff < min_diff) {
            min_diff = diff;
            idx1 = i+1;
            idx2 = i+2;
        }
    }

    cout << idx1 << " " << idx2 << endl;

    return 0;
}