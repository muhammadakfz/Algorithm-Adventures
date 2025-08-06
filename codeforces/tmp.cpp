#include <bits/stdc++.h>
#include <mutex>
using namespace std;

int main() {

    int n;
    cin >> n;

    set<int> s;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    int x;
    cin >> x;

    cout << s.find(x) << endl;

    return 0;
}
