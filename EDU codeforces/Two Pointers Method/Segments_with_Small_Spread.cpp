#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORI(i, a, b) for (int i = (a); i <= (b); i++)
#define io_i ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool good(const deque<int> &minQueue, const deque<int> &maxQueue, const int mxSpread) {
    if(minQueue.size() == 0 or maxQueue.size() == 0) return true;
    return maxQueue.front() - minQueue.front() <= mxSpread;
}

signed main() {
    io_i;

    int n, k; cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    int res = 0, j = 0;
    deque<int> minQ{}, maxQ{};
    for (int i = 0; i < n; i++) {
        while(minQ.size() > 0 and minQ.back() > a[i]) minQ.pop_back();
        minQ.push_back(a[i]);
        while(maxQ.size() > 0 and maxQ.back() < a[i]) maxQ.pop_back();
        maxQ.push_back(a[i]);

        while(!good(minQ, maxQ, k)) {
            if (minQ.size() > 0 && minQ.front() == a[j]) minQ.pop_front();
            if (maxQ.size() > 0 && maxQ.front() == a[j]) maxQ.pop_front();
            j++;
        }

        res += (i-j+1);
    }

    cout << res << "\n";
        

    return 0;
}