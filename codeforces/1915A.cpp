#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        map<int, int> mp;
        for (int i = 0; i < 3; i++) {
            int x;
            cin >> x;
            mp[x]++;
        }

        for (auto i: mp) {
            if(i.second == 1) {
                cout << i.first << endl;
                break;
            }
        }
    }

    return 0;
}
