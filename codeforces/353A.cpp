#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> lower(n), upper(n);

    int l_sum = 0, u_sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> lower[i] >> upper[i];
        l_sum += lower[i];
        u_sum += upper[i];
    }

    if (l_sum % 2 == 0 and u_sum % 2 == 0) {
        cout << "0\n";
        return 0;
    } 

    if ((l_sum % 2 == 0 and u_sum % 2 == 1) || 
        (l_sum % 2 == 1 and u_sum % 2 == 0)) {
        cout << "-1\n";
        return 0;
    }

    bool flag = false;
    for (int i = 0; i < n; i++) {
        if ((lower[i] % 2 == 1 and upper[i] % 2 == 0) || 
            (lower[i] % 2 == 0 and upper[i] % 2 == 1)) {
            flag = true;
            break;
        }
    }

    (flag) ? cout << "1\n" : cout << "-1\n";
    

    return 0;
}
