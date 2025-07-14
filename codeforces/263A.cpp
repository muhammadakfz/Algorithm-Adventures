#include <bits/stdc++.h>
using namespace std;

int main() {

    int v[5][5];
    int x, y;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> v[i][j];
            if (v[i][j] == 1) {
                x = i;
                y = j;
            }
        }
    }

    int moves = abs(x - 2) + abs(y - 2);
    cout << moves << endl;

    return 0;
}
