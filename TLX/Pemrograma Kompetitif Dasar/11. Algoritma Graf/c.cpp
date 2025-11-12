#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    deque<int> dq;

    int val = 0;

    while(n--) {
        string s;
        cin >> s;

        if(s == "add") {
            int a, b;
            cin >> a >> b;

            for(int i = 0; i < b; i++) {
                dq.push_front(a - val);
            }

            cout << dq.size() << endl;
        } else if(s == "del") {
            int a;
            cin >> a;
            cout << dq.front() + val << endl;
            for (int i = 0; i < a; i++) {
                dq.pop_front();
            }
        } else if(s == "adx") {
            int a;
            cin >> a;
            val += a;
        } else {
            int a;
            cin >> a;
            val -= a;
        }
    }

    return 0;
}
