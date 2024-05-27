#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;

        int sum = n*m;
        int w = 0, b = 0;
        if(sum % 2 == 0) {
            b = sum / 2 + 1;
            w = sum / 2 - 1;
        } else {
            b = sum / 2 + 1;
            w = sum / 2;
        }

        cout << w << " " << b << endl;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if(w > 0) {
                    cout << "W";
                    w--;
                } else if(b > 0) {
                    cout << "B";
                    b--;
                } 
            }

            cout << endl;
        }
        
    }

    return 0;
}