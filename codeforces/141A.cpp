#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2, tmp;
    cin >> s1 >> s2 >> tmp;
    s1 += s2;
    sort(s1.begin(), s1.end());
    sort(tmp.begin(), tmp.end());

    if(s1 == tmp) cout << "YES";
    else cout << "NO";

    return 0;
}