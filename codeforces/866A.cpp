#include <bits/stdc++.h>
using namespace std;

int main() {

    int a[6];
    for (int i = 0; i < 6; i++) cin >> a[i];

    if(a[0] + a[1] + a[4] == a[3] + a[2] + a[5]) {
        cout << "YES\n";
        return 0;
    }

    while(next_permutation(a, a + 6) || a[0] + a[1] + a[2] == a[3] + a[4] + a[5]) {
        // cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << " " << a[5] << endl;
        if((a[0] + a[1] + a[2] == a[3] + a[4] + a[5])) {
            cout << "YES\n";
            return 0;
        } 
    }

    cout << "NO\n";   

    // 1000 1000 1000 999 999 1000 
    
    return 0;
}