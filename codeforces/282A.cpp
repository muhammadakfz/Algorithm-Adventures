#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[6][6];
    int tmp1, tmp2;
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= 5; j++) {
            cin >> a[i][j];
            if(a[i][j] == 1) {
                tmp1 = i, tmp2 = j;
            }
        }
    }

    cout << abs(tmp1-3) + abs(tmp2-3) << endl;
    return 0;
}