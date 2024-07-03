#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, x;
    cin >> n >> x;

    vector<int> arr(n);

    int tmp = 1e9;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if(abs(x - arr[i]) <= tmp) tmp = abs(x - arr[i]);
    }

    int ans = 1e9;
    for (int i = 0; i < n; i++) {
        if (abs(x - arr[i]) == tmp) {
            if (arr[i] <= ans) ans = arr[i];
        }
    }

    cout << ans << '\n';


    return 0;
}