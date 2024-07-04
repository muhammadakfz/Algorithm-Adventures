#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, x;
    cin >> n >> x;

    map<string, string> mp;
    for (int i = 0; i < n; i++) {
        string s, num;
        cin >> s >> num;
        mp[s] = num;
    }

    for (int i = 0; i < x; i++) {
        string s;
        cin >> s;
        if(mp[s] == "") cout << "NIHIL" << endl;
        else cout << mp[s] << endl;
    }

    return 0;
}