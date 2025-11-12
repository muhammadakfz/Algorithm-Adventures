#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int n;
    cin >> n;

    vector<pair<int, int>> customers(n);
    for (int i = 0; i < n; i++) {
        cin >> customers[i].first >> customers[i].second;
    }
    sort(customers.begin(), customers.end());
    int max_customers = 0;
    int current_customers = 0;

    for (int i = 0; i < n; i++) {
        current_customers++;
        for (int j = 0; j < i; j++) {
            if (customers[j].second <= customers[i].first) {
                current_customers--;
            }
        }
        max_customers = max(max_customers, current_customers);
    }

    cout << max_customers << endl;

    return 0;
}
