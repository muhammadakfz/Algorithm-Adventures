#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, x;
    cin >> n >> x; 

    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    int ans = ceil(abs(sum) / (double)x);
    cout << ans << endl;


    return 0;
}
