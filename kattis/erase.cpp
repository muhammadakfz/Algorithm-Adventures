#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;

    string s1, s2;
    cin >> s1 >> s2;

    if(n % 2 == 0) {
        if(s1 == s2) cout << "Deletion succeeded" << endl;
        else cout << "Deletion failed" << endl;
    } else {
        for(int i = 0; i < s1.size(); i++) {
            if(s1[i] == s2[i]) {
                cout << "Deletion failed" << endl;
                return 0;
            }
        }
        cout << "Deletion succeeded" << endl;
    }
    

    return 0;
}