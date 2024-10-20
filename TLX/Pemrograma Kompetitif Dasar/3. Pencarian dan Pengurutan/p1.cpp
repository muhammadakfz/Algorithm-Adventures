#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, k; cin >> n >> k;

    vector<int> A(n), B(n);
    int tmp = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        tmp += x;
        A[i] = tmp;
    }

    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;
        cout << upper_bound(A.begin(), A.end(), x) - A.begin() << endl;
    }


    return 0;
}