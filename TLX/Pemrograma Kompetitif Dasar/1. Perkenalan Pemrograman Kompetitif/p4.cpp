#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string str;
    cin >> str;

    int n = str.size();
    int sq = ceil(sqrt(n));
    int tmp = 0;

    vector<vector<char>> a(sq, vector<char>(sq));
    for (int i = 0; i < sq; i++) {
        for (int j = 0; j < sq; j++) {
            if (tmp < n) {
                a[i][j] = str[tmp];
                tmp++;
            } else {
                a[i][j] = '.';
            }
        }
    }

    for (int i = 0; i < sq; i++) {
        if(i % 2 == 0) {
            for (int j = 0; j < sq; j++) {
                cout << a[i][j];
            }
        } else {
            for (int j = sq - 1; j >= 0; j--) {
                cout << a[i][j];
            }
        }

        cout << endl;
    }

    return 0;
}