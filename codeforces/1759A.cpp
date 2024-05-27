#include <bits/stdc++.h>
using namespace std;

int main()
{
    string full = string(18, 'Y') + string(18, 'E') + string(18, 'S');
    int t;
    cin >> t;
    for (int i = 0; i < 50; i++) full += "Yes";
    while (t--) {
        string s;
        cin >> s;

        if (full.find(s) != string::npos) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}