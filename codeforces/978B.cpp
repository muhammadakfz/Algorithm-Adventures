#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    string s; cin >> s;
    int cnt = 0;
    for (int i = 2; i < n; i++) if(s[i] == s[i-1] and s[i] == s[i-2] and s[i] == 'x') cnt++;
    cout << cnt << endl;    

    return 0;
}