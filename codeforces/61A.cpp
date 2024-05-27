#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int n = s1.size();

    for (int i = 0; i < n; i++) {
        if (s1[i] == '1' and s2[i] == '1') cout << 0;
        else if (s1[i] == '1' || s2[i] == '1') cout << 1;
        else cout << '0';
    }
    

    return 0;
}