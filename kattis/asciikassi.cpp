#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    for (int i = 0; i < n+2; i++) {
        for (int j = 0; j < n+2; j++) {
            if((j == 0 || j == n+1) and (i == 0 || i == n+1)) cout << '+';
            else {
                if(i == 0 || i == n+1) cout << "-";
                else if(j == 0 || j == n+1) cout << "|";
                else cout << " ";
            }
        } cout << "\n";
    }
    

    return 0;
}