#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, m, x;
        cin >> n >> m >> x;
        vector<pair<int, char>> v;
        for (int j = 0; j < m; j++) {
            int r;
            char c;
            cin >> r >> c;
            v.push_back(make_pair(r, c));
        }

        set<int> a;
        a.insert(x);

        for (auto i : v) {
            int r = i.first;
            char c = i.second;
            set<int> new_a;
            for (int player : a) {
                if (c == '0') {  
                    int p = (player + r) % n;
                    if (p == 0) {
                        p = n;
                    }
                    new_a.insert(p);
                } else if (c == '1') { 
                    int p = (player - r + n) % n;
                    if (p == 0) {
                        p = n;
                    }
                    new_a.insert(p);
                } else {  
                    int q = (player + r) % n;
                    if (q == 0) {
                        q = n;
                    }
                    int p_counterq = (player - r + n) % n;
                    if (p_counterq == 0) {
                        p_counterq = n;
                    }
                    new_a.insert(q);
                    new_a.insert(p_counterq);
                }
            }
            a = new_a;
        }

        cout << a.size() << endl;
        for (int player : a) {
            cout << player << " ";
        }
        cout << endl;
    }

    return 0;
}