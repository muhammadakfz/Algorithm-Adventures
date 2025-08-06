#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.first != b.first)
        return a.first > b.first;
    return a.second < b.second;
}

int main() {

    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }

    sort(a.begin(), a.end(), cmp);
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i].first == a[k - 1].first && a[i].second == a[k - 1].second) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
