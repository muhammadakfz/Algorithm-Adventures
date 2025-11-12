#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        int cnt = 0;
        vector<int> v;

        while(n != 0) {
            int x = n % 10;
            if (x != 0) v.push_back(pow(10, cnt) * x);
            n /= 10;
            cnt++;
        }

        cout << v.size() << endl;
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
