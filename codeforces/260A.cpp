#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int a, b, n;
    cin >> a >> b >> n;

    string s = to_string(a);
    while(n--) {
        bool flag = false;
        for (int i = 0; i < 10; i++) {
            if((a*10+i) % b == 0) {
                s += to_string(i);
                a = a*10+i;
                flag = true;
                a%=b;
                break;
            } 
        } 

        if(!flag) {
            cout << -1 << endl;
            return 0;
        }
    }


    cout << s << endl;

    return 0;
}