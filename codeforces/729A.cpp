#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    string s; cin >> s;
    
    for (int i = 0; i < n; i++) {
        if(s[i] == 'o') {
            if(i < n-1 && s[i+1] == 'g' && i < n-2 && s[i+2] == 'o') {
                cout << "***";
                while(i < n-1 && s[i+1] == 'g' && i < n-2 && s[i+2] == 'o') {
                    i += 2;
                }
            }
            else cout << 'o';
        }

        else cout << s[i];
    }



    return 0;
}