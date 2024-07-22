#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    deque<int> a;
    while(n--) {
        string s;
        cin >> s;

        if(s == "push_back") {
            int x;
            cin >> x;
            a.push_back(x);
        } else if(s == "push_front") {
            int x;
            cin >> x;
            a.push_front(x);
        } else if(s == "pop_back") {
            a.pop_back();
        } else if(s == "pop_front") {
            a.pop_front();
        } 
    }

    for(auto x : a) cout << x << endl;

    return 0;
}