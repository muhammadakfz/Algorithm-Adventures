#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;    vector<int> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    priority_queue<int> max_pq(a.begin(), a.end());
    int max_profit = 0;
    
    for (int i = 0; i < n; i++) {
        int seats = max_pq.top();
        max_pq.pop();
        max_profit += seats;
        if (seats > 1) {
            max_pq.push(seats - 1);
        }
    }

    priority_queue<int, vector<int>, greater<int>> min_pq(a.begin(), a.end());
    int min_profit = 0;
    
    for (int i = 0; i < n; i++) {
        int seats = min_pq.top();
        min_pq.pop();
        min_profit += seats;
        if (seats > 1) {
            min_pq.push(seats - 1);
        }
    }

    cout << max_profit << " " << min_profit << endl;
    
    return 0;
}