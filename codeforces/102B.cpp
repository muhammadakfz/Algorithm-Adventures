#include <bits/stdc++.h>
using namespace std;

int main() {

    string s; cin >> s;
    if(s.size() == 1) cout << 0 << endl;
    else {
        int sum = 0;
        for(auto i: s) sum += i - '0';

        int ans = 1;
        while(sum >= 10) {
            int tmp = sum;
            sum = 0;
            while(tmp) {
                sum += tmp % 10;
                tmp /= 10;
            }
            ans++;
        }
        
        cout << ans << endl;

    }

    return 0;
}
