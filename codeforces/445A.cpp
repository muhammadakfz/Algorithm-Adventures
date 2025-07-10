#include <bits/stdc++.h>
using namespace std;

int main() {    int n, m;
    cin >> n >> m;

    vector<vector<char>> v(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v[i][j] == '.') {
                if ((i + j) % 2 == 0) {
                    v[i][j] = 'B';
                } else {
                    v[i][j] = 'W';
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << v[i][j];
        }
        cout << endl;
    }

    return 0;
}