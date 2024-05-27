#include <bits/stdc++.h>
using namespace std;

int a[16][16];

int main() {

    int n;
    cin >> n;

    int cnt = 0;
    a[1][1] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if(j == 1) {
                a[i][j] = a[1][i];
                cout << a[i][j] << " ";
            } else {
                if(i == 1) {
                    a[i][j] = a[i][j-1] + j;
                    cout << a[i][j] << " ";
                } else {
                    a[i][j] = a[i-1][j] + a[i][j-1];
                    cout << a[i][j] << " ";
                }
            }
        } cout << endl;
    }

    return 0;
}