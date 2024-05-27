#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        if(sum == 0) cout << "NO\n";
        else {
            cout << "YES\n";
            sort(a.begin(), a.end());
            if(sum > 0) {
                reverse(a.begin(), a.end());
            }

            for (int i = 0; i < n; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}