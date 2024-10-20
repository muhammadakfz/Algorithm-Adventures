#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    deque<int> v;

    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        if(s == "add") {
            int x, y;
            cin >> x >> y;
            for (int j = 0; j < y; j++) {
                v.push_back(x);
            }

            cout << v.size() << endl;
        } 

        if(s == "del") {
            int y; 
            cin >> y;

            cout << v.front() << endl;
            for (int j = 0; j < y; j++) {
                v.pop_front();
            }
        }

        if(s == "rev") {
            reverse(v.begin(), v.end());
        }
    }

    return 0;
}