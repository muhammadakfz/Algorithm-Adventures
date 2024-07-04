#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    vector<int> v(n+1);
    for (int i = 1; i <= n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    if(n % 2 == 0) {
        int mid = n/2;
        if(v[mid] == v[mid+1]) cout << fixed << setprecision(1) << (double)v[mid] << endl;
        else {
            int sum = v[mid] + v[mid+1];
            cout << fixed << setprecision(1) << (double)sum/2 << endl;
        }
    }
    else {
        cout << fixed << setprecision(1) << (double)v[(n+1)/2] << endl;
    }

    return 0;
}