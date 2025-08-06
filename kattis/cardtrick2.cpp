#include <bits/stdc++.h>
#include <deque>
using namespace std;

vector<vector<int>> card(14);

void precompute() {
    for (int n = 1; n <= 13; n++) {
        deque<int> dq;
        for (int i = n; i >= 1; i--) {
            dq.push_front(i);
            for (int j = 0; j < i; j++) {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        } card[n] = vector<int>(dq.begin(), dq.end());
    }
}




int main() {

    int t;
    cin >> t;
    precompute();
    while (t--) {
        int n;
        cin >> n;
        int sz = card[n].size();
        for (int i = 0; i < sz; i++) {
            cout << card[n][i];
            if (i < sz - 1) cout << " ";
        } cout << endl;
    }

    return 0;
}
