#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int n, m;
    cin >> n >> m;

    multiset<int> tickets;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        tickets.insert(x);
    }

    vector<int> mx_price(m);
    for (int i = 0; i < m; i++) {
        cin >> mx_price[i];
    }


    for (int i = 0; i < m; i++) {
        int price = mx_price[i];
        auto it = tickets.upper_bound(price);
        if (it != tickets.begin()) {
            --it;
            cout << *it << endl;
            tickets.erase(it);
        } else {
            cout << "-1" << endl;
        }
    }

    return 0;
}
