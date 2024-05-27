#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> v;
        int cnt = 0;
        while(n > 0) {
            int x = n%10;
            if(x != 0) {
                v.push_back(x*pow(10, cnt));
            }
            n/=10;
            cnt++;
        }

        cout << v.size() << endl;
        for(int i = v.size()-1; i >= 0; i--) cout << v[i] << " ";
        cout << endl;
    }
    return 0;
}