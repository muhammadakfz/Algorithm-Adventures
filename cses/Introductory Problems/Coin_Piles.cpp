#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--) {
        int a, b;
        cin >> a >> b;
        
        if (a == 0 and b == 0) {
            cout << "YES" << endl;
            continue;
        }

        if (a == 0 or b == 0 or (a + b) % 3 != 0) {
            cout << "NO" << endl;
        } else if (a <= 2 * b && b <= 2 * a) {
            cout << "YES" << endl;   
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
