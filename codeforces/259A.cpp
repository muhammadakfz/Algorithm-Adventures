#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    for (int i = 0; i < 8; i++) {
        cin >> s;
        if(s == "BWBWBWBW" || s == "WBWBWBWB") continue;
        else {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    

    return 0;
}