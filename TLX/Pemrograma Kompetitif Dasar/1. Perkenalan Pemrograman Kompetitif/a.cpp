#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        
        string id;
        cin >> id;

        tuple<int, int, int, string> arr[n];
        for(int i = 0; i < n; i++) {
            string s; int a, b, c;
            cin >> s >> a >> b >> c;
            arr[i] = make_tuple(c, b, a, s);
        }
        
        sort(arr, arr+n, greater<tuple<int, int, int, string>>());
        for (int i = 0; i < n; i++) {
            // cout << get<3>(arr[i]) << endl;
            if(get<3>(arr[i]) == id) {
                if(i < m) cout << "YA" << endl;
                else cout << "TIDAK" << endl;
                break;
            }
        }
    }

    return 0;
}