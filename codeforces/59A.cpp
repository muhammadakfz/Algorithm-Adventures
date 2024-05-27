#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int u = 0, l = 0;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if(s[i] < 91) u++;
        else l++;
    }
    

    if(u > l) {
        for (int i = 0; i < n; i++)
        {
            s[i] = toupper(s[i]);
        }
    } else {
        for (int i = 0; i < n; i++)
        {
            s[i] = tolower(s[i]);
        }
    }

    cout << s << endl;

    return 0;
}