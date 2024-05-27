#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        vector<vector<char>> v(n, vector<char> (m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> v[i][j];
            }
        }

        string s = "vika";
        int cnt = 0;
        for (int j = 0; j < m; j++) {
            for (int i = 0; i < n; i++) {
                if(s[cnt] == v[i][j]) {
                    cnt++;
                    break;
                }
            }
        }

        cout << (cnt == 4? "YES" : "NO") << "\n";                
    }

    return 0;
}