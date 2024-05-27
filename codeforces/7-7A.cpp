#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m; cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char x; cin >> x;
            if(x == 'C' || x == 'M' || x == 'Y') {
                cout << "#Color\n";
                return 0;
            }   
        }
    }
    
    cout << "#Black&White\n";

    return 0;
}