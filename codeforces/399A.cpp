#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    vector<int> v;

    int n = s.size();
    for(int i = 0; i < n; i++) {
        if(s[i]!='+') v.push_back(int(s[i]-'0'));
    }

    sort(v.begin(), v.end());
    int cnt = 0, tmp = v.size(), j = 0;
    for (int i = 0; i < n; i++) {
        if(i%2==0) cout << v[j++];
        else cout << '+';
        cnt++;
    }

    return 0;
}